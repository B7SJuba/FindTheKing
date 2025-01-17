# Find the King - A Simple Betting Game

## Overview
"Find the King" is a simple console-based betting game written in C. The objective of the game is to guess the position of the King card after shuffling. Players start with a fixed amount of cash and can place bets on each round.

## How to Play
1. You start the game with $100.
2. Place your bet (must be greater than $0 and less than or equal to your current cash).
3. After placing your bet, the program shuffles a deck of three cards (`J`, `K`, `Q`).
4. Guess the position of the King (`1`, `2`, or `3`).
5. If you guess correctly, you win the amount you bet. If not, you lose your bet.
6. The game continues until you run out of cash.

## Features
- Interactive typing effect for enhanced user experience.
- Real-time card shuffling simulation.
- Validation for betting amounts and guesses.

## Code Highlights
- **Typing Simulation**: The `Type` function adds a simulated typing effect to enhance the game's presentation.
- **Shuffling Logic**: The cards (`J`, `K`, `Q`) are shuffled using random swaps, ensuring fairness in each round.
- **Betting System**: The game adjusts your cash balance based on the outcome of your guess.

## Installation
1. Clone the repository or download the source code:
   ```bash
   git clone https://github.com/B7SJuba/find-the-king.git
   ```
2. Open the source code file (`FindTheKing.c`) in your preferred C IDE or text editor.
3. Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc FindTheKing.c -o FindTheKing
   ```
4. Run the compiled program:
   ```bash
   ./FindTheKing
   ```

Alternatively, you can run the provided executable `FindTheKing` directly if you're using a Windows system.

## Usage
When you run the program, follow the on-screen prompts to:
- Place your bet.
- Guess the position of the King card.
- Check the updated cash balance after each round.

### Sample Output
```
-------welcome---------

Total cash=$100

Please enter your betting amount?$20
Shuffling is done.

What is the position of king(1,2,3)?2
You lose! :(
Position of cards= 'J' 'Q' 'K'   
Your current balance=$80

Please enter your betting amount?$30
Shuffling is done.

What is the position of king(1,2,3)?1
You win! :)   
Position of cards= 'K' 'J' 'Q'   
Your current balance=$110
```

## Requirements
- A C compiler (e.g., GCC, Clang, MSVC).
- Windows environment (or modify the `usleep` and `#include <Windows.h>` sections for cross-platform compatibility).

## Limitations
- The game ends when you run out of cash; there is no restart option.
- Designed for single-player use only.
- Platform-specific dependencies (`Windows.h` and `usleep`).

## Future Enhancements
- Add a restart or exit option when the game ends.
- Improve cross-platform compatibility.
- Add a graphical user interface (GUI).
- Include more cards for advanced gameplay.

## Contributing
Contributions are welcome! Feel free to submit a pull request or open an issue on the GitHub repository.

## License
This project is licensed under the MIT License. Feel free to use and modify the code as needed.

---
Enjoy the game and good luck finding the King! ♥

