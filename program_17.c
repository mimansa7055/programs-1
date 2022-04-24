/*WAP to find the range of a set of numbers. Orange is the difference between the
smallest and the biggest number in the list.
*/
#include <stdio.h>
int range1(int length, int num);
int main()
{
    int length, num;
    printf("enter the length");
    scanf("%d", &length);
    printf("enter the %d numbers", length);
    scanf("%d", &num);
    range1(length, num);
    return 0;
}
int range1(int length, int num)
{
    int small, big;
    small = big = num;
    length--;
    while (length > 0)
    {
        scanf("%d", &num);
        if (num > big)
        {
            big = num;
        }
        else
        {
            small = num;
        }
        length--;
    }
    int range = big - small;
    printf("the range is %d", range);
    ;
}


//OUTPUT
/*enter the length5
enter the 5 numbers23
67
90
25
12
the range is 78*/