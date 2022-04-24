/* WAP to print all the ASCII values and their equivalent characters using a while loop.
The ASCII values vary from 0 to 255.*/
#include <stdio.h>
int main()
{
    int val = 0;
    while (val < 256)
    {
        printf("%d = %c\n", val, val);
        val++;
    }
    return 0;
}