''' Python program to create a Task Manager (Sayed Mannan Ahmad) '''

import json
from datetime import datetime

# Defining class for tasks
class Task:
    def __init__(self, title, deadline, priority):
        self.title = title
        self.deadline = deadline
        self.priority = priority

    def __repr__(self):
        return f"Task(title={self.title}, deadline={self.deadline}, priority={self.priority})"

# Defining class for the task manager
class TaskManager:
    def __init__(self):
        self.tasks = []

    def add_task(self, title, deadline, priority):
        task = Task(title, deadline, priority)
        self.tasks.append(task)

    def view_tasks(self):
        for task in self.tasks:
            print(task)

    def save_tasks(self, filename):
        with open(filename, 'w') as f:
            json.dump([task.__dict__ for task in self.tasks], f)

    def load_tasks(self, filename):
        with open(filename, 'r') as f:
            tasks = json.load(f)
            self.tasks = [Task(**task) for task in tasks]

    def sort_tasks_by_deadline(self):
        self.tasks.sort(key=lambda task: datetime.strptime(task.deadline, '%Y-%m-%d'))

    def sort_tasks_by_priority(self):
        self.tasks.sort(key=lambda task: task.priority)

# Defining function to display the menu and handle user input
def display_menu():
    print("1. Add Task")
    print("2. View Tasks")
    print("3. Save Tasks")
    print("4. Load Tasks")
    print("5. Sort Tasks by Deadline")
    print("6. Sort Tasks by Priority")
    print("7. Exit")

def main():
    task_manager = TaskManager()

    while True:
        display_menu()
        choice = input("Enter your choice: ")

        if choice == '1':
            title = input("Enter task title: ")
            deadline = input("Enter task deadline (YYYY-MM-DD): ")
            priority = int(input("Enter task priority (1-5): "))
            task_manager.add_task(title, deadline, priority)
        elif choice == '2':
            task_manager.view_tasks()
        elif choice == '3':
            filename = input("Enter filename to save tasks: ")
            task_manager.save_tasks(filename)
        elif choice == '4':
            filename = input("Enter filename to load tasks: ")
            task_manager.load_tasks(filename)
        elif choice == '5':
            task_manager.sort_tasks_by_deadline()
        elif choice == '6':
            task_manager.sort_tasks_by_priority()
        elif choice == '7':
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
