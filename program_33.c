// WAP is a program to add two 6x6 matrices.
#include <stdio.h>
int add(int a[6][6], int b[6][6]);
int main()
{
    int a[6][6], b[6][6];
    printf("enter 1st matrix");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("enter 2nd matrix");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    add(a, b);
    return 0;
}
int add(int a[6][6], int b[6][6])
{
    int c[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nafter add we get");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}