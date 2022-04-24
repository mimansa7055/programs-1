// WAP to find the sum of the digits of a 4 digit number

#include <stdio.h>
int sum(int num)
{
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);
    printf("the sum is %d", sum(num));
    return 0;
}


//OUTPUT
/*enter the number 123456
the sum is 21
*/

#include<stdio.h>
//int ReverseString(int length);
int main()
{
char s[]= "ThisIsMyCode";
int length=0;
while(s[length]!='\0');
{
length++;
}
printf("the length is %d",length);
return 0;
}