#include <stdio.h>
int main(){
    int date;
    printf("Enter The Day Number");
    scanf("%d",&date);
    switch (date)
    {
        case 1:
        printf("Day Is Sunday\n");
        case 2:
        printf("Day Is Monday\n");
        case 3:
        printf("Day Is Tuesday\n");
        case 4:
        printf("Day Is Wednesday\n");
        case 5:
        printf("Day Is Thursday\n");
        case 6:
        printf("Day Is Friday\n");
        case 7:
        printf("Day Is Saturday\n");
    
    default:
    printf("Error: Please Enter A Valid Input");
        break;
    }

    return 0;
}
