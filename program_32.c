// WAP to obtain the transpose of a 4x4 matrix. The transpose of a matrix is obtained by
// exchanging the elements of each row with the elements of the corresponding column.

#include <stdio.h>
int transpose(int a[4][4]);
int main()
{
    int a[4][4];
    printf("enter the numbers");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    transpose(a);
    return 0;
}
int transpose(int a[4][4])
{
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}