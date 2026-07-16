# Number Guessing Game
A simple command-line number guessing game written in C using XCode.  
The program generates a random number between 0 and 100, and you have a limited number of attempts to guess it.  
This is my 2nd beginner C project for GitHub

## Features
- Generates a random number between 0–100 (different for each run)
- User has 6 attempts to guess the number
- Checks for invalid input (ex: letters) and clears keyboard buffer
- Provides feedback if the guess is too high or too low  

## Clone or Download the Project
Open your terminal and run: 
```bash
git clone https://github.com/jeetpan1125/guess-the-number.git
cd guess-the-number
```

## How to Run (in terminal)
1. Compile the Program
```bash
gcc *.c -o game
```
2. Run the program
```bash
./game
``` 

## Files
- `main.c` – main program  
- `.gitignore` – ignores system files  
