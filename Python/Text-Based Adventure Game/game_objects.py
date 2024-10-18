# game_objects.py

class Item:
    def __init__(self, name, description):
        self.name = name
        self.description = description

    def __str__(self):
        return f"{self.name}: {self.description}"


class Room:
    def __init__(self, name, description):
        self.name = name
        self.description = description
        self.items = []
        self.exits = {}

    def add_item(self, item):
        self.items.append(item)

    def set_exit(self, direction, room):
        self.exits[direction] = room

    def __str__(self):
        return f"{self.name}\n{self.description}\nItems: {', '.join(item.name for item in self.items) if self.items else 'None'}"


class Player:
    def __init__(self):
        self.inventory = []

    def pick_item(self, item):
        self.inventory.append(item)

    def use_item(self, item_name):
        for item in self.inventory:
            if item.name == item_name:
                self.inventory.remove(item)
                return item
        return None

    def show_inventory(self):
        return [item.name for item in self.inventory]
