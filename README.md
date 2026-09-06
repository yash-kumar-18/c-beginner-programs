# Voting_Eligibility_Checker.c

## 📖 Overview
This program is a simple C application that checks whether a user is eligible to vote based on their age.  
It demonstrates the use of:
- Input/Output functions (`printf`, `scanf`)
- Conditional statements (`if`, `else if`, `else`)
- Basic error handling for invalid age input

---

## ⚙️ How It Works
1. The program prompts the user to enter their age.
2. The input is stored in the variable `age`.
3. The program evaluates the input:
   - If `age < 0` → Displays an error message:  
     **"Error: Entered Age Must Be Greater Than Zero"**
   - If `age >= 18` → Displays:  
     **"You Are Eligible To Vote"**
   - If `age < 18` → Displays:  
     **"You Are Not Eligible To Vote"**

---

## 🛠️ Requirements
- A C compiler (e.g., GCC)
- Basic knowledge of compiling and running C programs

---

## ▶️ How to Run
1. Save the code in a file named `vote.c`.
2. Open a terminal and compile the program:
   ```bash
   gcc vote.c -o vote
