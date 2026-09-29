
#include <stdio.h>

int main(void) {
    // int total, hours, minutes, seconds;

    // scanf("%d", &total);

    // hours = total / 3600;
    // minutes = (total % 3600) / 60;
    // seconds = total % 60;
    // printf("%d seconds = %d h %d m %d s\n",
    //        total, hours, minutes, seconds);
    
    //  the calcukator :
    
    
    // scanf(" %c", &ch);

    // printf("Character : %c\n", ch);
    // printf("ASCII code: %d\n", ch);
    // printf("Next char : %c\n", ch + 1);
    // int a, b, c, largest;

    // scanf("%d %d %d", &a, &b, &c);

    // largest = a;

    // if (b > largest)
    //     largest = b;

    // if (c > largest)
    //     largest = c;

    // printf("Largest = %d\n", largest);

    // scanf("%d", &marks);

    // if (marks < 0 || marks > 100)
    //     printf("INVALID\n");
    // else if (marks >= 90)
    //     printf("Grade S\n");
    // else if (marks >= 80)
    //     printf("Grade A\n");
    // else if (marks >= 70)
    //     printf("Grade B\n");
    // else if (marks >= 40)
    //     printf("Grade C\n");
    // else
    //     printf("Fail\n");
    int year;

    scanf("%d", &year);

    if ((year % 400 == 0) ||(year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    

  return 0;
}
