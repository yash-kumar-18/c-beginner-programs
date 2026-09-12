#include <stdio.h>
int main(){
    // using num1, num2 and op as variables to store data
    double num1;
    double num2;
    char op;
    // Taking first Digit Input From User
    printf("Enter First Digit: ");
    scanf("%lf",&num1);
     // Taking second Digit Input From User
    printf("Enter Second Digit: ");
    scanf("%lf",&num2);
     // Taking operator Input From User
    printf("Enter A Operator (+,-,*,/): ");
    scanf(" %c",&op);
    // using switch statement as per operator choice by user
    switch (op)
    {case '+':
    printf("Result = %lf\n",num1+num2);
        break;
        case '-':
    printf("Result = %lf\n",num1-num2);
        break;
        case '*':
    printf("Result = %lf\n",num1*num2);
        break;
        case '/':
        if (num2==0)
        {printf("Error: Second Digit Must Not Be Zero While Using Divide(/) Operator");}
    else{
        printf("Result = %lf\n",num1/num2);}
        break;
    
    default:
    printf("Error: Entered Operator Must Be From Between (+,-,*,/)");
        break;
    }
    return 0;
}