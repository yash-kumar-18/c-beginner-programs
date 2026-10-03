#include <stdio.h>
int main (){
    int choice;
    double fare;
    double distance;
    int rushhour;
    printf("---Select A Vechile Type---\n");   
    printf("1: Bike (Base Rs 25 + Rs 8 Per Km)\n");
    printf("2: Auto (Base Rs 40 + Rs 12 Per Km)\n");
    printf("3: Sedan (Base Rs 80 + Rs 18 Per Km)\n");
    printf("Enter Your Vechile Option No.: ");
    scanf("%d",&choice);
    if (!(choice==1 ||choice==2 ||choice==3 ))
    { 
        printf("Error: Please Enter A Valid Input(i.e. 1,2 or 3)");
        return 0;
    }
    else
    printf("Please Enter The Distance (in Km): ");
    scanf("%lf",&distance);
    if (distance <=0){
        printf("Error: Distance Must Be Greater Than Zero");
        return 0;}
        else
        switch (choice)
        {
        case 1:
            fare=(25+distance*8);
            break;
        case 2:
            fare=(40+distance*12);
            break;
        case 3:
        fare=(80+distance*18);
            break;}
            printf("Is There Rush Hour Going On? (7:00 AM to 9:00 AM)\n");
            printf("1. Yes\n");
            printf("2. No\n");
            scanf("%d",&rushhour);
            if (!(rushhour==1 || rushhour==2))
    { printf("Error: Please Enter A Valid Input(i.e. 1 or 2)");
        return 0;
    }
   if (rushhour==1) {
        fare *= 1.25;
    }

    // Apply discounts
    if (fare >= 500) {
        printf("Your Total Fare After Discount(Rs 50): %.2lf\n", fare - 50);
    } else if (fare > 250 && fare < 500) {
        printf("Your Total Fare After Discount(Rs 20): %.2lf\n", fare - 20);
    } else {
        printf("Your Total Fare: %.2lf\n", fare);}

    return 0;
}