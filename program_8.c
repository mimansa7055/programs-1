// If the ages of A, B and C are input through the keyboard, write a program to determine
// the youngest of the three.
#include<stdio.h>
int smallest(int a,int b,int c)
{
    if(a<b && a<c)
    {
        printf("smallest is a");
    }
    else if(a<b && a>c)
    {
        printf("smallest is c");
    }
    else if(b<a && b<c)
    {
        printf("smallest is b");
    }
    else if(b<a && b>c)
    {
        printf("smallest is c");
    }
    else
    {
        printf("smallest is c");
    }
}
int main ()
{
    int a,b,c;
    printf("enter the age of a ");
    scanf("%d",&a);
    printf("enter the age of b ");
    scanf("%d",&b);
    printf("enter the age of c ");
    scanf("%d",&c);
    smallest (a,b,c);
    return 0;
}


//OUTPUT
/*enter the age of a 23
enter the age of b 43
enter the age of c 89
smallest is a*/