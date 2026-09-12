# Calculator.c

## 📖 Overview
This program performs basic arithmetic operations (**addition, subtraction, multiplication, division**) between two numbers entered by the user.  
It includes input validation to handle division by zero and invalid operator entries.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `switch` statements
- Error handling for invalid operators and division by zero
- Arithmetic operations (+, -, *, /)

---

## ⚙️ How It Works
1. The program asks the user to enter the **first number**.
2. It stores the input in `num1`.
3. The program asks the user to enter the **second number**.
4. It stores the input in `num2`.
5. The program asks the user to enter an **operator** (`+`, `-`, `*`, `/`).
6. Using a `switch` statement:
   - If operator is `+` → calculates `num1 + num2`
   - If operator is `-` → calculates `num1 - num2`
   - If operator is `*` → calculates `num1 * num2`
   - If operator is `/` → checks if `num2 == 0`
     - If yes → displays error message
     - If no → calculates `num1 / num2`
   - If operator is invalid → displays error message

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Calculator.c -o Calculator
./Calculator
