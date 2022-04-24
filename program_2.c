// WAP to swap two variables with and without using third variable

#include<stdio.h>
int swap1 (int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("the values after swapping are a=%d and b=%d\n",a,b);
}
int swap2(int a, int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
    printf("the values after swapping are a=%d and b=%d",a,b);
}
int main()
{
    int a, b;
    printf("enter the first number ");
    scanf("%d",&a);
    printf("enter the second number ");
    scanf("%d",&b);
//swapping using 3rd variable
    swap1(a,b);
//swapping without using 3rd variable
    swap2(a,b);
}

// OUTPUT

/*enter the first number 2
enter the second number 5
the values after swapping are a=5 and b=2
the values after swapping are a=5 and b=2*/