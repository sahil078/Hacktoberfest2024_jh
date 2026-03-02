import json
from pathlib import Path

TASKS_FILE = Path(__file__).with_name("tasks.json")
tasks = []


def load_tasks():
    global tasks
    if not TASKS_FILE.exists():
        tasks = []
        return

    try:
        data = json.loads(TASKS_FILE.read_text(encoding="utf-8"))
        if isinstance(data, list):
            normalized_tasks = []
            for item in data:
                if isinstance(item, dict) and "description" in item:
                    normalized_tasks.append(
                        {
                            "description": str(item["description"]),
                            "done": bool(item.get("done", False)),
                        }
                    )
                elif isinstance(item, str):
                    normalized_tasks.append({"description": item, "done": False})
            tasks = normalized_tasks
        else:
            tasks = []
    except (json.JSONDecodeError, OSError):
        tasks = []


def save_tasks():
    TASKS_FILE.write_text(json.dumps(tasks, indent=2), encoding="utf-8")


def add_task(task_description):
    cleaned_task = task_description.strip()
    if not cleaned_task:
        print("Task description cannot be empty.")
        return

    tasks.append({"description": cleaned_task, "done": False})
    save_tasks()
    print(f"Task '{cleaned_task}' added.")


def view_tasks():
    if not tasks:
        print("No tasks available.")
        return

    for i, task in enumerate(tasks, 1):
        status = "✅" if task["done"] else "⬜"
        print(f"{i}. {status} {task['description']}")


def mark_done(task_number):
    index = task_number - 1
    if index < 0 or index >= len(tasks):
        print("Invalid task number.")
        return

    tasks[index]["done"] = True
    save_tasks()
    print(f"Task {task_number} marked as done.")


def delete_task(task_number):
    index = task_number - 1
    if index < 0 or index >= len(tasks):
        print("Invalid task number.")
        return

    removed = tasks.pop(index)
    save_tasks()
    print(f"Task '{removed['description']}' deleted.")


if __name__ == "__main__":
    load_tasks()

    prompt = (
        "Enter action: add, view, done, delete, or quit: "
    )

    while True:
        action = input(prompt).strip().lower()

        if action == "add":
            task = input("Enter task description: ")
            add_task(task)
        elif action == "view":
            view_tasks()
        elif action == "done":
            try:
                task_number = int(input("Enter task number to mark done: "))
                mark_done(task_number)
            except ValueError:
                print("Please enter a valid number.")
        elif action == "delete":
            try:
                task_number = int(input("Enter task number to delete: "))
                delete_task(task_number)
            except ValueError:
                print("Please enter a valid number.")
        elif action == "quit":
            print("Goodbye!")
            break
        else:
            print("Invalid action. Try again.")
