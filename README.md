# 🎯 Number Guessing Game in C

This is a simple **command-line number guessing game** written in C.  
The program randomly picks a number between a user-defined range, and you have a limited number of attempts to guess it — based on **binary search logic**!

## 🧠 How It Works

- You enter a **lower** and **upper bound**.
- The program randomly generates a number in that range.
- You are given a limited number of chances (`ceil(log2(range size))`) to guess the number.
- After each guess, the program gives a hint: "too high" or "too low".
