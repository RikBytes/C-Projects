# Random Number Guesser

Welcome to the **Random Number Guesser**! This project is a simple command-line game written in C, where the user attempts to guess a randomly generated number within a specified range. It's a great example of beginner-level programming in C, focusing on loops, conditional statements, and random number generation.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Contributing](#contributing)
- [License](#license)

## Features

- Randomly generates a number for the user to guess.
- Provides hints to guide the user (e.g., "Too High!" or "Too Low!").
- Tracks the number of attempts.
- Configurable range for the random number.

## Getting Started

Follow these instructions to get a copy of the project up and running on your local machine.

### Prerequisites

- A C compiler such as GCC.
- A terminal or command prompt.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/random-number-guesser.git
   ```

2. Navigate to the project directory:
   ```bash
   cd random-number-guesser
   ```

3. Compile the program using a C compiler:
   ```bash
   gcc -o random_guesser random_guesser.c
   ```

4. Run the program:
   ```bash
   ./random_guesser
   ```

## Usage

1. Run the compiled program.
2. The program will display the range of the random number (default: 1 to 100).
3. Enter your guesses. The program will provide feedback on whether your guess is too high or too low.
4. Continue guessing until you find the correct number.
5. The program will display the total number of attempts once you guess correctly.

Example session:
```
Welcome to the Random Number Guesser!
Guess a number between 1 and 100: 50
Too high! Try again: 25
Too low! Try again: 37
Congratulations! You guessed the correct number in 3 attempts.
```

## How It Works

- The program uses the `rand()` function to generate a random number.
- User input is collected and compared with the randomly generated number.
- Feedback is provided to guide the user toward the correct guess.
- The game ends when the correct number is guessed.

## Contributing

Contributions are welcome! If you'd like to contribute to this project:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add some feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-name
   ```
5. Open a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Happy coding!

