#include <stdio.h>
int main (void){
    // using age to store the age of the user
    int age;
    // using printf to ask the user to enter their age and using scanf to store the value in the variable age
    printf("Please Enter Your Age: ");
    scanf("%d",&age);
    // using if else statement to check the age of the user and print the appropriate message
    if (age<0)
    {printf("Error: Entered Age Must Be Greater Than Zero");
    return 0;}
    else if (age>=18)
    {printf("You Are Eligible To Vote");
        return 0;
    }
    else
    {printf("You Are Not Eligible To Vote");
    }
    return 0;

}
