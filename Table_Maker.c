#include <stdio.h>
int main(){
    // variable to store the number whose table will be generated
    double number;
    // variable to store the limit up to which the table will be printed
    int limit;

    // ask user for the number
    printf("Which Number's Table Do You want To Generate: ");
    scanf("%lf",&number);

    // check if number is valid (greater than zero)
    if (number<=0)
    {
        printf("Error: Number Must Be Greater Than Zero\n");
        return 0; // exit program if invalid
    }

    // ask user for the table limit
    printf("Up To What Number Do You Want To Print The Table (1 to 10,000): ");
    scanf("%d",&limit);

    // check if limit is valid (greater than zero)
    if (limit<=0)
    {
        printf("Error: Table Limit Must Be Greater Than Zero.");
        return 0; // exit program if invalid
    }
    // check if limit is not greater than 10,000
    else if (limit>10000)
    {
        printf("Error: Table Limit Must Not Be Greater Than 10,000.");
        return 0; // exit program if invalid
    }
    else
        // loop from 1 up to the limit to print the table
        for (size_t i = 1; i <= limit; i++)
        {
            // print the multiplication in the format: number x i = result
            printf("%lf x %zu = %.2lf\n ", number, i, number*i);
        }

    return 0; // end of program
}
