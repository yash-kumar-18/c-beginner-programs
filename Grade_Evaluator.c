#include <stdio.h>
int main(){
    // variable to store marks entered by user
    double marks;

    // prompt user to enter marks
    printf("Enter Your Marks: ");
    scanf("%lf",&marks);

    // check if marks are greater than 100 (invalid input)
    if (marks>100)
    {printf("Error: Marks Cannot Be Greater Than 100.");
    }
    else
    // check for Grade A (marks >= 90)
    if (marks>=90)
    {printf("Excellent work! You achieved Grade A.");
    }
    // check for Grade B (marks between 75 and 89)
    else if (marks>=75)
    {printf("Good job! Keep it up — you earned Grade B.");
    }
    // check for Grade C (marks between 50 and 74)
    else if (marks>=50)
    {printf("You passed with Grade C. With more effort, you can do even better.");
    }
    // check for Pass (marks between 33 and 49)
    else if (marks>=33)
    {printf("You passed with Grade D. Keep working harder to improve further.");
    }
    // if marks are below 33 → Fail
    else
    printf("Don't lose hope - you'll have many chances ahead. This time you got Grade F (Fail).");

    // end of program
    return 0;
}
