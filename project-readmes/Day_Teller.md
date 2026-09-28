# Day_Finder.c

## 📖 Overview
This program determines the name of the day (Sunday to Saturday) based on a number entered by the user (1–7).  
It uses a `switch` statement to map the input number to the corresponding day name and displays an error message for invalid inputs.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional branching with `switch`
- Basic error handling for invalid inputs

---

## ⚙️ How It Works
1. The program asks the user to enter a **day number** (1–7).
2. It stores the input in `date`.
3. A `switch` statement is used to match the number:
   - `1 → Sunday`
   - `2 → Monday`
   - `3 → Tuesday`
   - `4 → Wednesday`
   - `5 → Thursday`
   - `6 → Friday`
   - `7 → Saturday`
4. If the input does not match any case, the program displays:
   - `Error: Please Enter A Valid Input`

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Day_Finder.c -o Day_Finder
./Day_Finder
