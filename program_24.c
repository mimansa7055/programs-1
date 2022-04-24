// ) WAP to find the maximum number and second maximum in an array.

#include <stdio.h>
int solve(int length, int arr[100]);
int main()
{
    int arr[100], length;
    printf("enter the length of array");
    scanf("%d", &length);
    printf("enter the array elements");
    solve(length, arr);
    return 0;
}
int solve(int length, int arr[100])
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the highest number is %d\n", arr[0]);
    printf("the second highest number is %d\n", arr[1]);
}


//OUTPUT
/*enter the length of array5
enter the array elements23
76
90
54
89
the highest number is 90
the second highest number is 89*/