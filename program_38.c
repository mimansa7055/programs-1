// WAP to delete all vowels from a sentence. Assume that the sentence is not more than
// 80 chars long.
#include <stdio.h>
#include <string.h>
int removeVowel(char s[100], int len);
int main()
{
    char s[80];
    printf("enter the string ");
    scanf("%[^\n]s", &s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("the length of string is %d\n", len);
    removeVowel(s, len);
    return 0;
}
int removeVowel(char s[100], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
            s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            for (j = i; j < len; j++)
            {
                s[j] = s[j + 1];
            }
            len--;
        }
    }
    printf("now the string is \n%s", s);
}


//OUTPUT
/*enter the string my name is mimansa
the length of string is 18
now the string is
my nm s mmns*/