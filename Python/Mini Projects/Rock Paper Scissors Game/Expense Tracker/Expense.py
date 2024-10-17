# Expense Tracker

import csv
import os

# Function to add an expense
def add_expense(expense_file, category, amount, description):
    with open(expense_file, mode='a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow([category, amount, description])
    print("Expense added successfully!")

# Function to view all expenses
def view_expenses(expense_file):
    if not os.path.exists(expense_file):
        print("No expenses recorded yet.")
        return
    
    with open(expense_file, mode='r') as file:
        reader = csv.reader(file)
        print("Category\tAmount\tDescription")
        print("---------------------------------")
        for row in reader:
            print(f"{row[0]}\t{row[1]}\t{row[2]}")

# Function to view total expenses
def total_expenses(expense_file):
    if not os.path.exists(expense_file):
        print("No expenses recorded yet.")
        return
    
    total = 0
    with open(expense_file, mode='r') as file:
        reader = csv.reader(file)
        for row in reader:
            total += float(row[1])
    
    print(f"Total Expenses: ${total:.2f}")

# Function to view expenses by category
def expenses_by_category(expense_file, category):
    if not os.path.exists(expense_file):
        print("No expenses recorded yet.")
        return
    
    total = 0
    with open(expense_file, mode='r') as file:
        reader = csv.reader(file)
        print(f"Expenses for {category}:")
        print("---------------------------------")
        for row in reader:
            if row[0].lower() == category.lower():
                print(f"${row[1]} - {row[2]}")
                total += float(row[1])
    
    print(f"Total for {category}: ${total:.2f}")

# Function to display menu
def display_menu():
    print("\nPersonal Expense Tracker")
    print("------------------------")
    print("1. Add Expense")
    print("2. View All Expenses")
    print("3. View Total Expenses")
    print("4. View Expenses by Category")
    print("5. Exit")

# Main program loop
def main():
    expense_file = 'expenses.csv'
    
    while True:
        display_menu()
        choice = input("\nChoose an option (1-5): ")
        
        if choice == '1':
            category = input("Enter the category (e.g., Food, Rent, Entertainment): ")
            amount = float(input("Enter the amount: "))
            description = input("Enter a description: ")
            add_expense(expense_file, category, amount, description)
        
        elif choice == '2':
            view_expenses(expense_file)
        
        elif choice == '3':
            total_expenses(expense_file)
        
        elif choice == '4':
            category = input("Enter the category to filter by: ")
            expenses_by_category(expense_file, category)
        
        elif choice == '5':
            print("Exiting the tracker. Goodbye!")
            break
        
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
