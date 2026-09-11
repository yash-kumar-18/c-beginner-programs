#include <stdio.h>
int main () {
    // using billamount and persons as identifiers to store the values of billamount and no. of persons
    double billamount;
    int persons;
    // using billpp as identifier to store the values of bill per persons
    double billpp;
    // Taking Bill Amount Input From User
    printf("Enter The Amount Of Bill: ");
    scanf("%lf",&billamount);
    // using condition so user unable to enter amount to be less than equal to zero.
    if (billamount<=0)
    { printf("Error: Bill Amount Must Be Greater Than Zero.");}
    // Taking Number of Persons From User
    printf("Enter The Number Of Persons: ");
    scanf("%d",&persons);
    // using condition so user unable to enter no. of persons to be less than equal to zero.
    if (persons<=0)
    {printf("Error: Persons Must Be Greater Than Zero.");}
    // using equation to show bill per persons
     billpp=billamount/persons;
     printf("Bill Per Person Is: %lf",billpp);

    return 0;
}