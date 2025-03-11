Guessing Game

Description

This is a simple number guessing game written in C. The program generates a random number between 1 and 100, and the player has three chances to guess the correct number. After each incorrect guess, the program provides a hint indicating whether the number is higher or lower.

Compilation and Execution

Compilation
Use a C compiler like gcc to compile the program:
gcc guessing_game.c -o guessing_game

Execution
Run the compiled program: ./guessing_game
Code Structure
generate_Random_number(int *random_number): Generates a random number between 1 and 100.
main(): Controls the game logic and user input.
