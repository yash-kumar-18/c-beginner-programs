# Mini_ATM_Banking.c

## 📖 Overview
This program simulates a **mini ATM banking system** where a user can:
- Check their account balance
- Deposit money
- Withdraw money
- Exit the system  

It includes input validation to ensure deposits are greater than zero and withdrawals do not exceed the available balance.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `switch` statements
- Error handling for invalid inputs
- Basic arithmetic operations for deposits and withdrawals

---

## ⚙️ How It Works
1. The program starts with a default **balance = 100.00**.
2. Displays a menu with four options:
   - `1` → Check Account Balance  
   - `2` → Deposit Money  
   - `3` → Withdraw Money  
   - `4` → Exit  
3. User enters a choice.
4. Program uses a `switch` statement to execute the selected option:
   - **Check Balance (1):** Displays current account balance.  
   - **Deposit Money (2):**  
     - Prompts user to enter deposit amount.  
     - If amount > 0 → Adds to balance and displays closing balance.  
     - Else → Displays error message.  
   - **Withdraw Money (3):**  
     - Prompts user to enter withdrawal amount.  
     - If amount > 0 and ≤ balance → Deducts from balance and displays closing balance.  
     - If amount > balance → Displays error message.  
     - If amount ≤ 0 → Displays error message.  
   - **Exit (4):** Displays a thank-you message.  
   - **Invalid choice:** Displays error message.  
5. Program ends with `return 0;`.

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Mini_ATM_Banking.c -o Mini_ATM_Banking
./Mini_ATM_Banking
