/*WAP that will read a line and replace all spaces with "0x20".*/
#include <stdio.h>
#include <string.h>
int replace(char s[100], int len);
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
    replace(s, len);
    return 0;
}
int replace(char s[100], int len)
{
    int j = 0;
    char s1[100] = " ";
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            s1[j] = '0';
            s1[j + 1] = 'x';
            s1[j + 2] = '2';
            s1[j + 3] = '0';
            j = j + 4;
        }
        else
        {
            s1[j] = s[i];
            j++;
        }
    }
    printf("string after replacing is \n %s", s1);
    return 0;
}


//OUTPUT
/*enter the string my name is mimansa
the length of string is 18
string after replacing is
 my0x20name0x20is0x20mimansa*/