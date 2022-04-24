/*Two numbers are entered through the keyboard. WAP to find the value of one number
raised to the power of another.
*/
#include <stdio.h>
int power(int pow, int n);
int main()
{
    int n, pow;
    printf("enter the number");
    scanf("%d", &n);
    printf("enter the power");
    scanf("%d", &pow);
    power(pow, n);
    return 0;
}
int power(int pow, int n)
{
    int ans = 1;
    while (pow != 0)
    {
        ans *= n;
        pow--;
    }
    printf("%d", ans);
}


//OUTPUT
/*enter the number3
enter the power5
243*/