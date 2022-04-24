// WAP to find whether the year is leap or not ( Do this with conditional operators)
#include <stdio.h>
int leapyear(int year);
int main()
{
    int year;
    printf("enter the year ");
    scanf("%d", &year);
    leapyear(year);
    return 0;
}
int leapyear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("the year is leap year");
            }
            else
            {
                printf("the year is not leap year");
            }
        }
        else
        {
            printf("the year is leap year");
        }
    }
    else
    {
        printf("the year is not leap year");
    }
}


//OUTPUT
/* enter the year 2016
the year is leap year*/