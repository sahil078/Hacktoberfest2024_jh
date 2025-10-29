#!/usr/bin/env python3
"""
Emoji Catcher - Simple Python Game
Catch the falling emojis by typing their names!
"""

import random
import time

# List of emojis and their names
emojis = {
    "🍎": "apple",
    "🍌": "banana",
    "🍇": "grapes",
    "🍒": "cherry",
    "🥕": "carrot",
    "🍉": "watermelon",
    "🍍": "pineapple"
}

def emoji_catcher():
    print("=== EMOJI CATCHER GAME ===")
    print("Type the name of the emoji shown before it disappears!")
    print("You have 5 lives. Each wrong guess costs a life.\n")
    
    lives = 5
    score = 0
    
    while lives > 0:
        emoji, name = random.choice(list(emojis.items()))
        print(f"CATCH THIS: {emoji}")
        
        guess = input("Your guess: ").strip().lower()
        
        if guess == name:
            score += 1
            print(f"✅ Correct! Score: {score}\n")
        else:
            lives -= 1
            print(f"❌ Wrong! It was '{name}'. Lives left: {lives}\n")
        
        time.sleep(0.5)
    
    print(f"GAME OVER! Your final score is {score} 🎉")

if __name__ == "__main__":
    emoji_catcher()
