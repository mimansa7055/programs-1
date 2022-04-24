// WAP to check whether the entered string is palindrome or not.
#include <stdio.h>
#include <string.h>
int stringPalindrome(char s[100], int len);
int main()
{
    char s[100];
    printf("enter the string ");
    scanf("%s", &s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("the length of string is %d\n", len);
    stringPalindrome(s, len);
    return 0;
}
int stringPalindrome(char s[100], int len)
{
    int i = 0;
    int j = len - 1;
    while (j > i)
    {
        if (s[i++] != s[j--])
        {
            printf("it is not palindrome");
            return 0;
        }
    }
    printf("it is palindrome");
}


//OUTPUT
/*enter the string madam
the length of string is 5
it is palindrome*/