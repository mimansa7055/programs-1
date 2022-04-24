//) Swap the value of two variables using call by value & by reference
#include <stdio.h>
int swap1(int a, int b);
int swap2(int *a, int *b);
int main()
{
    int a, b;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    // call by value
    swap1(a, b);
    // call by reference
    swap2(&a, &b);
    return 0;
}
int swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("now a=%d and b=%d\n", a, b);
}
int swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("now a=%d and b=%d", *a, *b);
}


//OUTPUT
/*enter the value of a5
enter the value of b7
now a=7 and b=5
now a=7 and b=5*/
