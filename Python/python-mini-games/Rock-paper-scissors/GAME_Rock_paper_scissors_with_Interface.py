

import random
import gradio as gr



user_wins = 0
computer_wins = 0

options = ['rock', 'paper', 'scissors']

def play_game(user_choice):
    global user_wins, computer_wins
    computer_choice = None
    result = None

    if user_choice == "Quit":
        result = f"You won {user_wins} times.\nThe computer won {computer_wins} times.\nGoodbye!"
        return result, computer_choice
    
    random_number = random.randint(0, 2)
    computer_choice = options[random_number]


    if user_choice == "rock" and computer_choice == "scissors":
        result = "You win!"
        user_wins += 1
    elif user_choice == "paper" and computer_choice == "rock":
        result = "You win!"
        user_wins += 1
    elif user_choice == "scissors" and computer_choice == "paper":
        result = "You win!"
        user_wins += 1
    elif user_choice == computer_choice:
        result = "You both picked the same"
    else:
        result = "You lost"
        computer_wins += 1

    return result, computer_choice

iface = gr.Interface(
    fn=play_game,
    inputs=gr.Dropdown(choices=["rock", "paper", "scissors", "Quit"], label="Your Choice"),
    outputs=[
        gr.Textbox(label="Output 0"),
        gr.Textbox(label="Computer's Choice")
    ],
    title="Rock Paper Scissors",
    description="Choose your weapon!",
)

iface.launch()