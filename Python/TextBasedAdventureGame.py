def start_game():
    print("Welcome to the Text-Based Adventure Game!")
    print("You find yourself in a dark forest with two paths ahead.")
    print("Do you want to go left or right?")

    choice = input("Enter 'left' or 'right': ").lower()

    if choice == 'left':
        left_path()
    elif choice == 'right':
        right_path()
    else:
        print("Invalid choice. Please try again.")
        start_game()

def left_path():
    print("You chose the left path and encounter a wild animal.")
    print("Do you want to run or fight?")

    choice = input("Enter 'run' or 'fight': ").lower()

    if choice == 'run':
        print("You ran away safely and found a hidden treasure!")
        end_game()
    elif choice == 'fight':
        print("You fought bravely but got injured. You need to find help.")
        find_help()
    else:
        print("Invalid choice. Please try again.")
        left_path()

def right_path():
    print("You chose the right path and find a mysterious cave.")
    print("Do you want to enter the cave or keep walking?")

    choice = input("Enter 'enter' or 'walk': ").lower()

    if choice == 'enter':
        print("You entered the cave and discovered ancient artifacts!")
        end_game()
    elif choice == 'walk':
        print("You kept walking and reached a beautiful waterfall.")
        end_game()
    else:
        print("Invalid choice. Please try again.")
        right_path()

def find_help():
    print("You are looking for help and see a village in the distance.")
    print("Do you want to go to the village or rest for a while?")

    choice = input("Enter 'village' or 'rest': ").lower()

    if choice == 'village':
        print("You reached the village and received medical assistance. You are safe now!")
        end_game()
    elif choice == 'rest':
        print("While resting, you found some medicinal herbs and healed yourself. You are safe now!")
        end_game()
    else:
        print("Invalid choice. Please try again.")
        find_help()

def end_game():
    print("Congratulations! You have completed the adventure.")
    play_again = input("Do you want to play again? (yes/no): ").lower()

    if play_again == 'yes':
        start_game()
    else:
        print("Thank you for playing! Goodbye.")

if __name__ == "__main__":
    start_game()
