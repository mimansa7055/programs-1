// WAP to find if the number to be searched is present in the array and if yes, then
// display the number of times it appears.

#include <stdio.h>
int search(int arr[100], int key, int length);
int main()
{
    int arr[100], key, length;
    printf("enter the length of array");
    scanf("%d", &length);
    printf("enter the numbers");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d", &key);
    search(arr, key, length);
    return 0;
}
int search(int arr[100], int key, int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    printf("the number occurs %d times", count);
}


//OUTPUT
/*enter the length of array5
enter the numbers12
45
643
56
8
enter the number to be searched8
the number occurs 1 times*/