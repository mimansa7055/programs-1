/*If a five-digit number is input through the keyboard, write a program to print a new
number by adding one to each of its digits.
For example if the number that is input is 12391 then the output should be displayed
as 23402*/

#include <stdio.h>
int add1(int num)
{
    int rem, ans = 0, Inc = 1;
    while (num > 0)
    {
        rem = num % 10;
        rem++;
        rem = rem % 10;
        ans = ans + rem * Inc;
        Inc = Inc * 10;
        num = num / 10;
    }
    return ans;
}
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);
    printf("the value after increment is %d", add1(num));
    return 0;
}

//OUTPUT
/*enter the number 54936
the value after increment is 65047*/