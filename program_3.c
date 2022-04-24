// WAP to find the reverse of a 4 digit number

#include <stdio.h>
int reverse(int num)
{
    int rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);
    printf("the reverse of a number is %d ", reverse(num));
    return 0;
}


//OUTPUT

/*enter the number 45687
the reverse of a number is 78654 */