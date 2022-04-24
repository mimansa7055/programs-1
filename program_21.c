//  WAP to print the multiplication table of the number entered by the user.
#include <stdio.h>
int table(int num);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    table(num);
    return 0;
}
int table(int num)
{
    for (int i = 1; i < 11; i++)
    {
        int mul = num * i;
        printf("%d * %d = %d\n", num, i, mul);
    }
}


//OUTPUT
/*enter the number 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50*/