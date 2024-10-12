tasks = []

def add_task(task):
    tasks.append(task)
    print(f"Task '{task}' added.")

def view_tasks():
    if not tasks:
        print("No tasks available.")
    else:
        for i, task in enumerate(tasks, 1):
            print(f"{i}. {task}")

if __name__ == "__main__":
    while True:
        action = input("Enter 'add' to add a task or 'view' to see all tasks (or 'quit' to exit): ").strip().lower()
        if action == "add":
            task = input("Enter task description: ")
            add_task(task)
        elif action == "view":
            view_tasks()
        elif action == "quit":
            break
        else:
            print("Invalid action. Try again.")
