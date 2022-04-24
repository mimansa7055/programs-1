// WAP to find out whether the entered number is Armstrong or not.
#include<stdio.h>
int Armstrong (int num);
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    Armstrong (num);
    return 0;
}
int Armstrong (int num)
{
    int count=0, num1=num;
    while(num1>0)
    {
        num1=num1/10;
        count++;
    }
    int count1=count, mul=1, result=0;
    num1=num;
    while(num1>0)
    {
        int rem = num1%10;
        while(count1>0)
        {
            mul=mul*rem;
            count1--;
        }
        result = result+mul;
        count1=count;
        num1=num1/10;
        mul=1;
    }
    if(result == num)
    {
        printf("the number is Armstrong");
    }
    else
    {
        printf("the number is not Armstrong");
    }
}


//OUTPUT
/*enter the number 371
the number is Armstrong*/
