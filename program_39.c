// WAP that will read a line and delete from it all the occurrences of the word 'the'
#include <stdio.h>
#include <string.h>
int removeThe(char s[100], int len);
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
    removeThe(s, len);
    return 0;
}
int removeThe(char s[100], int len)
{
    int j = 0;
    char s1[100] = "";
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'e')
        {
            i = i + 2;
        }
        else
        {
            s1[j] = s[i];
            j++;
        }
    }
    printf("string after removing all 'the' is \n %s", s1);
    return 0;
}


//OUTPUT
/*enter the string the sun and the moon
the length of string is 20
string after removing all 'the' is
  sun and  moon*/