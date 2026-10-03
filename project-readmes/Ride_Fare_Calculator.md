# Ride_Fare_Calculator.c

## 📖 Overview
This program calculates the fare for different vehicle types (Bike, Auto, Sedan) based on distance traveled, rush hour surcharge, and applicable discounts.  
It includes input validation to ensure that the vehicle choice and distance are valid, and applies conditional logic for rush hour and discount rules.

It demonstrates:
- Input/Output with `printf` and `scanf`
- Conditional logic with `if` and `switch`
- Arithmetic operations for fare calculation
- Error handling for invalid inputs

---

## ⚙️ How It Works
1. The program asks the user to select a **vehicle type**:
   - `1 → Bike (Base Rs 25 + Rs 8/km)`
   - `2 → Auto (Base Rs 40 + Rs 12/km)`
   - `3 → Sedan (Base Rs 80 + Rs 18/km)`
   - If input is invalid → `Error: Please Enter A Valid Input (i.e. 1, 2 or 3)`
2. The program asks the user to enter the **distance (in km)**.
   - If `distance <= 0` → `Error: Distance Must Be Greater Than Zero`
3. The program calculates the base fare depending on the vehicle type.
4. The program asks if it is **rush hour (7:00 AM to 9:00 AM)**:
   - `1 → Yes` → Fare increases by 25%
   - `2 → No` → Fare remains unchanged
   - If input is invalid → `Error: Please Enter A Valid Input (i.e. 1 or 2)`
5. The program applies discounts:
   - If `fare >= 500` → Rs 50 discount
   - If `fare > 250 && fare < 500` → Rs 20 discount
   - Otherwise → No discount
6. The program prints the **final fare**.

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ Compile & Run
```bash
gcc Fare_Calculator.c -o Fare_Calculator
./Fare_Calculator
