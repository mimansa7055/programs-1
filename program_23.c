// ) Calculate Factorial, Sum of digits & Reverse a number using recursive and non
// recursive functions.
#include<stdio.h>
int sum(int num);
int factRecursive(int num);
int factorial (int num);
int reverse (int num);
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    printf("the sum is %d\n",sum(num));
    printf("the factorial by recursion is %d\n", factRecursive (num));
    printf("the factorial without using recursion is %d\n", factorial (num));
    printf("the reverse is %d",reverse(num));
    return 0;
}
int sum(int num)
{
    int add=0, rem;
    while(num>0)
    {
        rem=num%10;
        add=add+rem;
        num=num/10;
    }
    return add;
}
int factRecursive (int num)
{
    if(num<2)
    {
        return 1;
    }
    else
    {
        return num*factRecursive (num-1);
    }
}
int factorial (int num)
{
    int mul=1;
    for(int i=1; i<=num; i++)
    {
        mul=mul*i;
    }
    return mul;
}
int reverse (int num)
{
    int rem,rev=0;
    while(num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    return rev;
}


//OUTPUT
/* 
enter the number 23
the sum is 5
the factorial by recursion is 862453760
the factorial without using recursion is 862453760
the reverse is 32*/