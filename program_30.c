// Implement Linear search and Binary search
#include <stdio.h>
int LinearSearch(int a[100], int n, int key);
int BinarySearch(int a[100], int n, int key);
int main()
{
    int a[100], n;
    printf("enter the length of array ");
    scanf("%d", &n);
    printf("enter the array elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int key;
    printf("enter the element to be searched");
    scanf("%d", &key);
    LinearSearch(a, n, key);
    printf("element is present at %d index", BinarySearch(a, n, key));
    return 0;
}
int LinearSearch(int a[100], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf("element is present at %d index\n", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("element is not present");
    }
}
int BinarySearch(int a[100], int n, int key)
{
    int begi = 0, end = n - 1;
    int mid;
    while (begi <= end)
    {
        mid = (begi + end) / 2;
        if (a[mid] == key)
        {
            return mid + 1;
        }
        else if (a[mid] < key)
        {
            begi = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}


//OUTPUT
/*enter the length of array 5
enter the array elements 12
10
13
121
14
enter the element to be searched13
element is present at 3 index
element is present at 3 index*/