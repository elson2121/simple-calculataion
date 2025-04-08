# Basic C++ Calculator

This repository contains a simple C++ program that performs four basic mathematical operations: addition, subtraction, multiplication, and division.

## Overview

The program takes two numerical inputs from the user and an operator (+, -, *, /). It then performs the selected operation and displays the result. The program also includes basic error handling for division by zero and invalid operation input.

## Files

* `calculator.cpp`: The C++ source code file containing the calculator program.

## How to Compile and Run

1.  **Save the code:** Save the provided C++ code in a file named `calculator.cpp`.

2.  **Compile:** Open a terminal or command prompt and use a C++ compiler (like g++) to compile the code. Ensure you have a C++ compiler installed on your system.

    ```bash
    g++ calculator.cpp -o calculator
    ```

    This command will create an executable file named `calculator` in the same directory.

3.  **Run:** Execute the compiled program using the following command:

    ```bash
    ./calculator
    ```

    The program will then prompt you to enter the first number, the second number, and the desired operation.

## Usage

1.  When the program starts, it will ask you to "Enter first number: ". Type a number (integer or decimal) and press Enter.
2.  Next, it will ask you to "Enter second number: ". Type another number and press Enter.
3.  Finally, it will ask you to "Enter operation (+, -, *, /): ". Type the symbol for the desired operation and press Enter.

The program will then output the result of the calculation.

## Error Handling

* **Division by Zero:** If you attempt to divide by zero, the program will output an error message: "Error: Cannot divide by zero."
* **Invalid Operation:** If you enter an operator other than +, -, *, or /, the program will output an error message: "Error: Invalid operation."

## Code Structure

The program is structured with separate functions for each arithmetic operation:

* `add(double num1, double num2)`: Returns the sum of two numbers.
* `subtract(double num1, double num2)`: Returns the difference of two numbers.
* `multiply(double num1, double num2)`: Returns the product of two numbers.
* `divide(double numerator, double denominator)`: Returns the quotient of two numbers, with error handling for division by zero.

The `main` function handles user input, calls the appropriate function based on the entered operator using a `switch` statement, and displays the result or error messages.

## Author

[Your Name (or leave blank)]

## License

[Optional: Include a license if you wish, e.g., MIT License]# simple-calculataion
