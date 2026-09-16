#include <stdio.h>
int main(){
    // variable to store initial account balance
    double balance=100.00;
    // variable to store deposit/withdrawal amount
    double amount;
    // variable to store user's menu choice
    int choice;

    // Display menu options
    printf("---Welcome To Mini ATM Banking---\n");
    printf("Choose An Option Below\n");
    printf("1. Check Account Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter An Option No.: ");
    scanf("%d",&choice);

    // Switch statement to handle user choice
    switch (choice)
    {
    case 1: // Check balance
     printf("Your Account Balance: %.3lf",balance);
        break;

    case 2: // Deposit money
    printf("Enter Amount: ");
    scanf("%lf",&amount);
    if (amount>0)
    {
        // If deposit amount is valid, update balance
        printf("Deposit Successful! Closing Balance: %.3lf\n",amount+balance);
        printf("Thank You For Banking With Us. Please Visit Again!");
    }
    else
    {
        // Error if deposit amount <= 0
        printf("Error: Deposit Amount Must Be Greater Than Zero.");
        return 0;
    }
    break;

    case 3: // Withdraw money
    printf("Enter Amount: ");
    scanf("%lf", &amount);
    if (amount>0)
    {
        // Check if withdrawal amount is less than or equal to balance
        {if (balance>amount)
        {
            printf("Withdrawal Successful! Closing Balance: %.3lf\n",balance-amount);
            printf("Thank You For Banking With Us. Please Visit Again!");
        }
        else
            // Error if withdrawal amount exceeds balance
            printf("Error: Withdrawal Amount Must Be Less Than or Equal To Available Balance.");
        }
    }
    else
        // Error if withdrawal amount <= 0
        printf("Error: Withdrawal Amount Must Be Greater 0.");
    return 0;
    break;

    case 4: // Exit
    printf("Thank You For Visiting. Please Visit Again!");
    break;

    default: // Invalid choice
    printf("Error: Please Enter A Valid Input. (i.e. 1, 2, 3 or 4)");
        break;
    }

    return 0;
}
