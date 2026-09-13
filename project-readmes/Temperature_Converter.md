# Temperature_Converter.c

## 📖 Overview
This program converts temperatures between **Celsius and Fahrenheit**.  
It allows the user to choose the conversion direction and repeat calculations until they decide to exit.  
It includes input validation to ensure correct menu choices and safe handling of user responses.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `switch` statements
- Looping with `do...while` for repeated calculations
- Error handling for invalid menu options and inputs

---

## ⚙️ How It Works
1. The program displays a menu:
   - `1` → Celsius to Fahrenheit
   - `2` → Fahrenheit to Celsius
2. The user enters their choice.
   - If choice is invalid → `Error: Please Enter A Valid Option (i.e. 1 or 2)`
3. Based on the choice:
   - **Celsius to Fahrenheit**:  
     Formula → `(C * 1.8) + 32`
   - **Fahrenheit to Celsius**:  
     Formula → `(F - 32) * 5 / 9`
4. After each calculation, the program asks:
   - `Do You Want To Calculate Again? (y/n)`
   - If `y` → repeats calculation
   - If `n` → exits with a thank-you message
   - If invalid → `Error: Please Enter A Valid Input (i.e. y or n)`

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Temperature_Converter.c -o Temperature_Converter
./Temperature_Converter
