#include <stdio.h>
int main(){
    // variable to store temperature value
    double temperature;
    // variable to store user's choice for conversion (1 or 2)
    int conversionchoice;
    // variable to store user's choice for repeating calculation (y/n)
    char choice;

    // Display menu options to the user
    printf("Choose An Option Below\n");
    printf("1. Celsius To Fahrenheit\n");
    printf("2. Fahrenheit To Celsius\n");
    printf("Enter An Option No.: ");
    scanf("%d", &conversionchoice);

    // Validate the option entered by the user
    if (!(conversionchoice == 1 || conversionchoice == 2)) {
        printf("Error: Please Enter A Valid Option (i.e. 1 or 2)\n");
        return 0; // exit program if invalid option
    }

    // Perform conversion based on user's choice
    switch (conversionchoice) {
        case 1: // Celsius to Fahrenheit
            do {
                // Take temperature input in Celsius
                printf("Enter The Temperature (in Celsius): ");
                scanf("%lf", &temperature);

                // Convert Celsius to Fahrenheit using formula (C * 1.8 + 32)
                printf("The Temperature In Fahrenheit Will Be: %lf\n", (temperature * 1.8) + 32);

                // Ask user if they want to calculate again
                printf("Do You Want To Calculate Again? (y/n): ");
                scanf(" %c", &choice);

                // Validate input (must be y or n)
                if (!(choice == 'y' || choice == 'n')) {
                    printf("Error: Please Enter A Valid Input (i.e. y or n)\n");
                    return 0; // exit program if invalid input
                }

                // Exit if user chooses 'n'
                if (choice == 'n') {
                    printf("Thank You For Using.\n");
                    return 0;
                }
            } while (choice == 'y'); // repeat if user enters 'y'
            break;

        case 2: // Fahrenheit to Celsius
            do {
                // Take temperature input in Fahrenheit
                printf("Enter The Temperature (in Fahrenheit): ");
                scanf("%lf", &temperature);

                // Convert Fahrenheit to Celsius using formula ((F - 32) * 5/9)
                printf("The Temperature In Celsius Will Be: %lf\n", (temperature - 32) * 5 / 9);

                // Ask user if they want to calculate again
                printf("Do You Want To Calculate Again? (y/n): ");
                scanf(" %c", &choice);

                // Validate input (must be y or n)
                if (!(choice == 'y' || choice == 'n')) {
                    printf("Error: Please Enter A Valid Input (i.e. y or n)\n");
                    return 0; // exit program if invalid input
                }

                // Exit if user chooses 'n'
                if (choice == 'n') {
                    printf("Thank You For Using.\n");
                    return 0;
                }
            } while (choice == 'y'); // repeat if user enters 'y'
            break;
    }
    return 0; // end of program
}
