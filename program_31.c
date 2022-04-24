// WAP to pick up the largest number from any 5X5 matrix.
#include <stdio.h>
int max(int a[5][5]);
int main()
{
    int a[5][5];
    printf("enter the numbers");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    max(a);
    return 0;
}
int max(int a[5][5])
{
    int maximum = a[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (maximum < a[i][j])
            {
                maximum = a[i][j];
            }
        }
    }
    printf("maximum number is %d ", maximum);
}