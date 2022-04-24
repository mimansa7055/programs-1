// WAP to find the reverse of a 4 digit number and compare it to the original number.

#include<stdio.h>
int reverse (int num);
int main()
{
    int num = 4567;
    int rev=reverse(num);
    return 0;
}
int reverse (int num)
{
    int rev=0;
    int rem;
    while(num!=0)
    {
        rem=num%10;
        rev=rem+rev*10;
        num=num/10;
    }
    printf("the reverse of a number is %d ",rev);
    if(rev==num)
    {
        printf("\nthe reverse is equal to the number");
    }
    else
    {
        printf("\nthe reverse is not equal to the number");
    }
    return rev;
}


//OUTPUT 
/*the reverse of a number is 7654 
the reverse is not equal to the number*/