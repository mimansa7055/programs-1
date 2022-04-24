// WAP to find the area & perimeter of a rectangle

#include <stdio.h>
int area(int l, int b);
int perimeter(int l, int b);
int main()
{
    int l, b;
    printf("enter the length ");
    scanf("%d", &l);
    printf("enter the breadth ");
    scanf("%d", &b);
    printf("the area of rectangle is %d\n", area(l, b));
    printf("the perimeter of rectangle is %d\n", perimeter(l, b));
    return 0;
}
int area(int l, int b)
{
    return l * b;
}
int perimeter(int l, int b)
{
    return 2 * (l + b);
}

// OUTPUT

/*enter the length 5
enter the breadth 9
the area of rectangle is 45
the perimeter of rectangle is 28*/

