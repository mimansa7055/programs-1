//  WAP to find whether the entered number is prime or not.
#include <stdio.h>
int prime(int num);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    prime(num);
    return 0;
}
int prime(int num)
{
    int a, count = 0;
    for (a = 2; a < num; a++)
    {
        if (num % a == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}


//OUTPUT
/*enter the number56
The number is not prime*/