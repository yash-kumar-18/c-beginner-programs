# Table_Generator.c

## 📖 Overview
This program generates the multiplication table of a given number up to a user-defined limit.  
It includes input validation to ensure that both the number and the limit are greater than zero, and that the limit does not exceed 10,000.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `if` and `else if` statements
- Looping with `for` to generate tables
- Basic error handling for invalid inputs

---

## ⚙️ How It Works
1. The program asks the user to enter the **number** whose table they want to generate.
   - If `number <= 0` → `Error: Number Must Be Greater Than Zero`
2. The program asks the user to enter the **limit** (up to how many multiples to print).
   - If `limit <= 0` → `Error: Table Limit Must Be Greater Than Zero`
   - If `limit > 10000` → `Error: Table Limit Must Not Be Greater Than 10,000`
3. If both inputs are valid, the program prints the multiplication table in the format:
   - `number x i = result`

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Table_Generator.c -o Table_Generator
./Table_Generator
