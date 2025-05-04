# Rock Paper Scissors Game

A simple Rock Paper Scissors game implemented in C++.

##  Description
This project is a console-based Rock Paper Scissors game where you play against the computer. Each round, the computer randomly chooses Rock, Paper, or Scissors, and you make your choice to see who wins!

##  How to Run
1. **Install a C++ Compiler:** Ensure you have a C++ compiler like `g++` installed.
2. **Compile the Code:**
   ```bash
   g++ rock_paper_scissors.cpp -o rock_paper_scissors
   ```
3. **Run the Game:**
   ```bash
   ./rock_paper_scissors
   ```

## Game Rules
- Rock beats Scissors.
- Scissors beats Paper.
- Paper beats Rock.
- If both choose the same, it's a draw.

##  How to Play
1. Enter:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
2. The game will display the result of the round.
3. After each round, you can choose to play again by entering:
   - `y` for Yes
   - `n` for No

##  Sample Output
```
WELCOME TO !!!
 ROCK PAPER SCISSORS GAME
-----------------------------
Enter 1 for Rock
Enter 2 for Paper
Enter 3 for Scissors
-> 1
--------------------------------------------------------------------------------------------------------------
$ Player Win $
--------------------------------------------------------------------------------------------------------------
You want to play more
Enter y for yes or n for no
```

##  What I Learned
- Using `rand()` to generate random numbers.
- Handling invalid input with `cin.clear()` and `cin.ignore()`.
- Structuring code using classes and methods.
- Using `setw()` for formatted output.

## Future Improvements
- Add score tracking.
- Implement a best-of-5 mode.
- Create a GUI version.

##  Feedback
I would love to hear your feedback! Feel free to open an issue or contribute to improving the game.

---
Made with ❤️ by Jay.
