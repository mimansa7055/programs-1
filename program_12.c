// WAP to find the factorial value of any number.
#include<stdio.h>
int factorial (int num);
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num,factorial(num));
    return 0;
}
int factorial (int num)
{
    if(num<2)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}


//OUTPUT
/*enter the number 4
the factorial of 4 is 24*/