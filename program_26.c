// WAP to find out in a[25] how many are positive, how many are negative, how many are
// even and how many are odd.

#include <stdio.h>
int solve(int a[25], int length)
{
    int p = 0, n = 0, odd = 0, even = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] >= 0 && a[i] % 2 == 0)
        {
            p++;
            even++;
        }
        else if (a[i] < 0 && a[i] % 2 == 0)
        {
            n++;
            even++;
        }
        else if (a[i] >= 0 && a[i] % 2 != 0)
        {
            p++;
            odd++;
        }
        else
        {
            n++;
            odd++;
        }
    }
    printf("positive=%d\n", p);
    printf("negative=%d\n", n);
    printf("odd=%d\n", odd);
    printf("even=%d", even);
}
int main()
{
    int a[25], length;
    printf("enter the length of array");
    scanf("%d", &length);
    printf("enter the array elements");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    solve(a, length);
}


//OUTPUT
/*enter the length of array5
enter the array elements-9
8
0
-4
34
positive=3
negative=2
odd=1
even=4*/
