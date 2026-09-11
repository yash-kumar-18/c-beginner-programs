# Bill_Splitter.c

## 📖 Overview
This program calculates the bill amount per person when splitting a total bill among multiple people.  
It includes input validation to ensure that both the bill amount and the number of persons are greater than zero.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `if` statements
- Basic error handling for invalid inputs
- Arithmetic operations for division

---

## ⚙️ How It Works
1. The program asks the user to enter the **bill amount**.
2. It stores the input in `billamount`.
   - If `billamount <= 0` → `Error: Bill Amount Must Be Greater Than Zero`
3. The program asks the user to enter the **number of persons**.
4. It stores the input in `persons`.
   - If `persons <= 0` → `Error: Persons Must Be Greater Than Zero`
5. If both inputs are valid, it calculates:
   - `billpp = billamount / persons`
   - Displays → `Bill Per Person Is: <calculated_value>`

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Bill_Splitter.c -o Bill_Splitter
./Bill_Splitter
