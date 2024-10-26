//Implements Swing Gui
import javax.swing.*;
import javax.swing.Timer;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.util.List;
import java.io.*;

public class TypingSpeedGame extends JFrame {
    private static final String[] SAMPLE_TEXTS = {
            "The quick brown fox jumps over the lazy dog.",
            "Java is a versatile programming language.",
            "Swing provides a rich set of GUI components.",
            "Practice typing to improve your speed and accuracy.",
            "Artificial intelligence is changing the world."
    };

    private JTextArea textToTypeArea;
    private JTextArea userTypedArea;
    private JButton startButton;
    private JButton restartButton;
    private JLabel timeLabel;
    private JLabel wpmLabel;
    private JLabel accuracyLabel;
    private JLabel errorLabel;
    private JList<String> leaderboardList;
    private DefaultListModel<String> leaderboardModel;

    private long startTime;
    private Timer timer;
    private boolean gameInProgress = false;
    private int errorCount = 0;

    public TypingSpeedGame() {
        setTitle("Typing Speed Game");
        setSize(700, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Layout setup
        setLayout(new BorderLayout(10, 10));
        getContentPane().setBackground(Color.LIGHT_GRAY);

        // Text to type panel
        JPanel topPanel = new JPanel(new BorderLayout());
        textToTypeArea = new JTextArea(3, 40);
        textToTypeArea.setWrapStyleWord(true);
        textToTypeArea.setLineWrap(true);
        textToTypeArea.setEditable(false);
        textToTypeArea.setFont(new Font("Times New Roman", Font.BOLD, 18));
        textToTypeArea.setForeground(new Color(45, 78, 153));
        textToTypeArea.setText("Click 'Start' to begin the game.");
        topPanel.setBorder(BorderFactory.createTitledBorder("Text to Type"));
        topPanel.add(new JScrollPane(textToTypeArea), BorderLayout.CENTER);
        add(topPanel, BorderLayout.NORTH);

        // Typing panel
        JPanel centerPanel = new JPanel(new BorderLayout());
        userTypedArea = new JTextArea(3, 40);
        userTypedArea.setWrapStyleWord(true);
        userTypedArea.setLineWrap(true);
        userTypedArea.setFont(new Font("Serif", Font.PLAIN, 18));
        userTypedArea.setEnabled(false);
        centerPanel.setBorder(BorderFactory.createTitledBorder("Type Here"));
        centerPanel.add(new JScrollPane(userTypedArea), BorderLayout.CENTER);
        add(centerPanel, BorderLayout.CENTER);

        // Control panel
        JPanel controlPanel = new JPanel(new GridLayout(2, 1, 10, 10));
        JPanel buttonPanel = new JPanel();
        startButton = new JButton("Start");
        restartButton = new JButton("Restart");
        restartButton.setEnabled(false);
        timeLabel = new JLabel("Time: 0s");
        wpmLabel = new JLabel("WPM: 0");
        accuracyLabel = new JLabel("Accuracy: 100%");
        errorLabel = new JLabel("Errors: 0");

        buttonPanel.add(startButton);
        buttonPanel.add(restartButton);
        controlPanel.add(buttonPanel);

        JPanel statsPanel = new JPanel();
        statsPanel.add(timeLabel);
        statsPanel.add(wpmLabel);
        statsPanel.add(accuracyLabel);
        statsPanel.add(errorLabel);
        controlPanel.add(statsPanel);

        add(controlPanel, BorderLayout.SOUTH);

        // Leaderboard panel
        JPanel leaderboardPanel = new JPanel(new BorderLayout());
        leaderboardModel = new DefaultListModel<>();
        leaderboardList = new JList<>(leaderboardModel);
        leaderboardPanel.setBorder(BorderFactory.createTitledBorder("Leaderboard"));
        leaderboardPanel.add(new JScrollPane(leaderboardList), BorderLayout.CENTER);
        add(leaderboardPanel, BorderLayout.EAST);

        // Event listeners
        startButton.addActionListener(e -> startGame());
        restartButton.addActionListener(e -> restartGame());
        userTypedArea.addKeyListener(new KeyAdapter() {
            public void keyReleased(KeyEvent e) {
                checkCompletion();
            }
        });

        loadLeaderboard();
    }

    private void startGame() {
        if (gameInProgress) return;

        Random random = new Random();
        String textToType = SAMPLE_TEXTS[random.nextInt(SAMPLE_TEXTS.length)];
        textToTypeArea.setText(textToType);

        userTypedArea.setText("");
        userTypedArea.setEnabled(true);
        userTypedArea.requestFocus();

        startButton.setEnabled(false);
        restartButton.setEnabled(true);
        gameInProgress = true;
        startTime = System.currentTimeMillis();
        errorCount = 0;
        errorLabel.setText("Errors: 0");
        accuracyLabel.setText("Accuracy: 100%");
        wpmLabel.setText("WPM: 0");

        timer = new Timer(100, e -> updateTime());
        timer.start();
    }

    private void updateTime() {
        long elapsed = System.currentTimeMillis() - startTime;
        timeLabel.setText("Time: " + (elapsed / 1000) + "s");
    }

    private void checkCompletion() {
        String typedText = userTypedArea.getText().trim();
        String targetText = textToTypeArea.getText().trim();

        // Check for errors
        if (!targetText.startsWith(typedText)) {
            errorCount++;
            errorLabel.setText("Errors: " + errorCount);
        }

        // Completion check
        if (typedText.equals(targetText)) {
            timer.stop();
            gameInProgress = false;
            userTypedArea.setEnabled(false);
            startButton.setEnabled(true);

            long elapsedTime = System.currentTimeMillis() - startTime;
            int wordCount = targetText.split("\\s+").length;
            int timeInSeconds = (int) (elapsedTime / 1000);
            int wpm = (int) ((wordCount / (timeInSeconds / 60.0)) + 0.5);
            wpmLabel.setText("WPM: " + wpm);

            // Accuracy calculation
            int totalChars = targetText.length();
            int correctChars = typedText.length() - errorCount;
            double accuracy = ((double) correctChars / totalChars) * 100;
            accuracyLabel.setText(String.format("Accuracy: %.2f%%", accuracy));

            saveScore(wpm, accuracy);
            loadLeaderboard();
        }
    }

    private void restartGame() {
        userTypedArea.setText("");
        textToTypeArea.setText("Click 'Start' to begin the game.");
        startButton.setEnabled(true);
        restartButton.setEnabled(false);
        wpmLabel.setText("WPM: 0");
        timeLabel.setText("Time: 0s");
        accuracyLabel.setText("Accuracy: 100%");
        errorLabel.setText("Errors: 0");
        gameInProgress = false;
    }

    private void saveScore(int wpm, double accuracy) {
        String name = JOptionPane.showInputDialog(this, "Enter your name for the leaderboard:");
        if (name != null && !name.isEmpty()) {
            try (PrintWriter writer = new PrintWriter(new FileWriter("leaderboard.txt", true))) {
                writer.println(name + " - WPM: " + wpm + ", Accuracy: " + String.format("%.2f", accuracy) + "%");
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    private void loadLeaderboard() {
        leaderboardModel.clear();
        List<String> scores = new ArrayList<>();
        try (Scanner scanner = new Scanner(new File("leaderboard.txt"))) {
            while (scanner.hasNextLine()) {
                scores.add(scanner.nextLine());
            }
        } catch (FileNotFoundException e) {
            System.out.println("Leaderboard file not found. It will be created.");
        }

        // Sort leaderboard by WPM (descending)
        scores.sort((a, b) -> {
            int wpmA = Integer.parseInt(a.split(" - ")[1].split(",")[0].split(":")[1].trim());
            int wpmB = Integer.parseInt(b.split(" - ")[1].split(",")[0].split(":")[1].trim());
            return Integer.compare(wpmB, wpmA);
        });

        for (String score : scores) {
            leaderboardModel.addElement(score);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            TypingSpeedGame game = new TypingSpeedGame();
            game.setVisible(true);
        });
    }
}
