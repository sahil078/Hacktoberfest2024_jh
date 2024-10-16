import random

def get_comp_choice():
    return random.choice(['rock', 'paper', 'scissors'])

def get_usr_choice():
    choices = ['rock', 'paper', 'scissors']
    user_input = input("What's your pick? Rock, Paper, or Scissors: ").lower()
    
    if user_input not in choices:
        print("\nOops! That's not a valid option. Let's try that again.")
        return get_usr_choice()
    return user_input

def determine_winner(usr_choice, comp_choice):
    if usr_choice == comp_choice:
        return "It's a tie! We think alike."
    
    win_cond = {
        'rock': 'scissors',   
        'scissors': 'paper',  
        'paper': 'rock'       
    }
    if win_cond[usr_choice] == comp_choice:
        return "Well done, you win!"
    else:
        return "Oops, the computer wins this round."

def play_game():
    print("\nWelcome to Rock, Paper, Scissors!\n")
    
    comp_choice = get_comp_choice()
    usr_choice = get_usr_choice()
    
    print(f"\nYou went with: {usr_choice.capitalize()}")
    print(f"Computer went with: {comp_choice.capitalize()}")
    
    result = determine_winner(usr_choice, comp_choice)
    print(f"\n{result}")

if __name__ == "__main__":
    play_game()