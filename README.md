# 🎯 Number Guessing Game in C

This is a simple **command-line number guessing game** written in C.  
The program randomly picks a number between a user-defined range, and you have a limited number of attempts to guess it — based on **binary search logic**!

## 🧠 How It Works

- You enter a **lower** and **upper bound**.
- The program randomly generates a number in that range.
- You are given a limited number of chances (`ceil(log2(range size))`) to guess the number.
- After each guess, the program gives a hint: "too high" or "too low".

## 🛠 Features

Uses ```log₂(n) to limit number of guesses.```

Generates a random number using rand() and srand(time(0)).

Basic use of control statements, math functions, and user input.

### ✅ Advantages of the Number Guessing Game in C
# 🧠 1. Educational Value
Reinforces C fundamentals: Teaches basic concepts like variables, loops, conditionals, functions, and I/O.

Math skills: Introduces logarithmic calculations using log() and ceil() to determine optimal guesses.

Randomization: Demonstrates the use of random number generation with rand() and srand().

# 🖥️ 2. Simple and Lightweight
No dependencies: Uses only standard C libraries (stdio.h, stdlib.h, math.h, time.h).

Low resource usage: Can run on any system with a C compiler — no GUI, no heavy frameworks.

# 🎯 3. Binary Search Concept
Encourages efficient thinking: Uses log₂(n) to calculate the minimum number of guesses, teaching students how binary search works in real life.

# ⚙️ 4. Easy to Customize
You can easily expand or modify:

Add difficulty levels

Add a scoring system

Convert it into a multiplayer game

Port it to other platforms (GUI, web, Python, etc.)

# 💡 5. Great for Beginners
Perfect first project: Easy to understand, build, test, and improve.

Good for interviews or demos: Shows logical thinking, problem-solving, and basic coding ability.

# 📚 6. Prepares You for Bigger Projects
Introduces core programming concepts in a hands-on way.

Builds confidence for more complex topics like:

Game development

Data structures

Algorithms


