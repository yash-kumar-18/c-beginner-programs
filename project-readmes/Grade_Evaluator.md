# Grade_Evaluator.c

## 📖 Overview
This program calculates a student’s grade based on marks entered by the user.  
It includes input validation to ensure that marks do not exceed 100 and assigns grades according to defined ranges.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `if` and `else if`
- Error handling for invalid inputs
- Range-based decision making

---

## ⚙️ How It Works
1. The program asks the user to enter their **marks**.
2. It stores the input in `marks`.
3. The program checks:
   - If `marks > 100` → `Error: Marks Cannot Be Greater Than 100`
   - If `marks >= 90` → `Grade A`
   - If `marks >= 75 && marks < 90` → `Grade B`
   - If `marks >= 50 && marks < 75` → `Grade C`
   - If `marks >= 33 && marks < 50` → `Grade D`
   - If `marks < 33` → `Grade F (Fail)`
4. The program prints the corresponding grade message.

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Grade_Calculator.c -o Grade_Calculator
./Grade_Calculator
