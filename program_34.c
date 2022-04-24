//  WAP to multiply any two 3x3 matrices.

#include <stdio.h>
int product(int a[3][3], int b[3][3]);
int main()
{
    int a[3][3], b[3][3];
    printf("enter number of 1st matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter number of 2nd matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    product(a, b);
    return 0;
}
int product(int a[3][3], int b[3][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    printf("after multiplication we get\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}


//OUTPUT
/*enter number of 1st matrix1
2
3
4
5
6
7
8
9
1       2       3
4       5       6
7       8       9
enter number of 2nd matrix1
2
3
4
5
6
7
8
9
1       2       3
4       5       6
7       8       9
after multiplication we get
1       4       9
16      25      36
49      64      81*/