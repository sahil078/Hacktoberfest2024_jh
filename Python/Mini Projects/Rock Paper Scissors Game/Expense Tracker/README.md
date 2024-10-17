# Personal Expense Tracker

This is a basic Python program for tracking personal expenses. The program allows users to add expenses, view all expenses, view total expenses, and filter expenses by category. All expenses are stored in a CSV file for easy retrieval and data management.

## Features

- **Add Expense**: Add a new expense with a category, amount, and description.
- **View All Expenses**: Display all recorded expenses.
- **View Total Expenses**: Calculate and display the total expenses.
- **View Expenses by Category**: Filter and view expenses by a specific category (e.g., Food, Rent, etc.).

## Requirements

- Python 3.x
- No external libraries are needed, as the program uses built-in Python modules like `csv` and `os`.

## How to Use

1. Clone this repository or download the `expense_tracker.py` file.
2. Open your terminal or command prompt and navigate to the directory where the file is saved.
3. Run the program using the following command:
   ```bash
   python expense.py
   ```
4. You will be presented with a menu:
   - Option 1: Add an expense (category, amount, description).
   - Option 2: View all expenses.
   - Option 3: View the total sum of all expenses.
   - Option 4: View expenses filtered by category.
   - Option 5: Exit the program.

## Example

```bash
Personal Expense Tracker
------------------------
1. Add Expense
2. View All Expenses
3. View Total Expenses
4. View Expenses by Category
5. Exit

Choose an option (1-5):
```

## CSV File

All the expenses you add are saved in a CSV file named `expenses.csv`. This file is automatically created in the same directory where the program is executed. You can open this file in any spreadsheet program (e.g., Excel, Google Sheets) to view your expenses.

## Future Improvements

- Add support for tracking expenses by date.
- Create monthly expense reports.
- Allow users to edit or delete past expenses.
- Include a graphical summary of expenses using charts.


