// WAP to print all the Armstrong numbers between 1 and 500.
#include<stdio.h>
int main()
{
    int num, count=1,rem,sum=0;
    while(count<501)
    {
        num=count;
        while(num>0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(count==sum)
        {
            printf("%d\n", count);
        }
        count++;
        sum=0;
    }
    return 0;
}


//OUTPUT
/*1
153
370
371
407*/
