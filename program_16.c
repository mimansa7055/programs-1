/*WAP to enter numbers until the user wants. At the end it should display the count of
positive, negative and zeros entered.
*/
#include <stdio.h>
int count(int num, int l);
int main()
{
    int l, num;
    printf("how many numbers you want to enter");
    scanf("%d", &l);
    printf("enter the numbers");
    count(num, l);
    return 0;
}
int count(int num, int l)
{
    int positive = 0, negative = 0, zeros = 0;
    while (l > 0)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
        l--;
    }
    printf("positive=%d\n", positive);
    printf("negative=%d\n", negative);
    printf("zeros=%d", zeros);
}


//OUTPUT
/*how many numbers you want to enter5
enter the numbers-8
3
6
-3
0
positive=2
negative=2
zeros=1*/