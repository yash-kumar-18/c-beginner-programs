# Voting_Eligibility_Checker.c

## 📖 Overview
This program checks whether a user is eligible to vote based on age.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `if`, `else if`, and `else`
- Basic input validation for negative age values

---

## ⚙️ How It Works
1. The program asks the user to enter age.
2. It stores the input in `age`.
3. It evaluates:
   - If `age < 0` → `Error: Entered Age Must Be Greater Than Zero`
   - If `age >= 18` → `You Are Eligible To Vote`
   - Otherwise → `You Are Not Eligible To Vote`

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Voting_Eligibility_Checker.c -o Voting_Eligibility_Checker
./Voting_Eligibility_Checker
```
