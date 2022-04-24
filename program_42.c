/*WAP that converts all lowercase characters in a given string to its equivalent uppercase
character*/
#include <stdio.h>
#include <string.h>
int convert(char s[100], int len);
int main()
{
    char s[100];
    printf("enter the string ");
    scanf("%[^\n]s", &s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("the length of string is %d\n", len);
    convert(s, len);
    return 0;
}
int convert(char s[100], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("string after converting is \n %s", s);
    return 0;
}


//OUTPUT
/*enter the string the Sun and Moon
the length of string is 16
string after converting is
 THE SUN AND MOON*/