// Implement the Selection Sort, Bubble Sort and Insertion Sort.
#include <stdio.h>
int selectionSort(int a[100], int n);
int bubbleSort(int a[100], int n);
int insertionSort(int a[100], int n);
int main()
{
    int a[100], n;
    printf("enter the length of array ");
    scanf("%d", &n);
    printf("enter the elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selectionSort(a, n);
    bubbleSort(a, n);
    insertionSort(a, n);
    return 0;
}
int selectionSort(int a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("array after selection sorting is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
int bubbleSort(int a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = a[j];
            }
        }
    }
    printf("array after bubble sorting is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int insertionSort(int a[100], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("array after insertion sort is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}


//OUTPUT
/*
enter the length of array5
enter the numbers12
45
643
56
8
enter the number to be searched8
the number occurs 1 times
PS C:\Users\Mimansa Sharma\Desktop\Obdure\Assignment1> cd "c:\Users\Mimansa Sharma\Desktop\Obdure\Assignment1\" ; if ($?) { gcc Program_29.c -o Program_29 } ; if ($?) { .\Program_29 }
enter the length of array 5
enter the elements 12
8
10
6
34
array after selection sorting is
6
8
10
12
34
array after bubble sorting is
6
8
10
12
34
array after insertion sort is
6
8
10
12
34*/