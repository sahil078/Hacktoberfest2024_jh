import random

print("\n🎯 Welcome to the Number Guesser Game!")
print("Choose Difficulty:\n1. Easy (1-10)\n2. Medium (1-50)\n3. Hard (1-100)")

while True:
    choice = input("Enter your choice (1/2/3): ")

    if choice == '1':
        top_of_range = 10
        break
    elif choice == '2':
        top_of_range = 50
        break
    elif choice == '3':
        top_of_range = 100
        break
    else:
        print("❌ Invalid input. Please enter 1, 2 or 3.")

random_number = random.randint(1, top_of_range)
guesses = 0

while True:
    user_guess = input(f"\n🔢 Guess a number between 1 and {top_of_range}: ")
    if not user_guess.isdigit():
        print("❌ Please enter a valid number.")
        continue

    user_guess = int(user_guess)
    guesses += 1

    if user_guess == random_number:
        print(f"\n🎉 Congratulations! You guessed the number in {guesses} tries.")
        break
    elif user_guess > random_number:
        print("📈 Too high! Try again.")
    else:
        print("📉 Too low! Try again.")

# Ask to play again
while True:
    again = input("\n🔁 Do you want to play again? (y/n): ").lower()
    if again == 'y':
        exec(open(__file__).read())  # Restart the script
        break
    elif again == 'n':
        print("👋 Thanks for playing! Goodbye!")
        break
    else:
        print("Please type y or n.")
