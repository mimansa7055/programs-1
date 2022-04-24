// WAP to reverse a string.
#include<stdio.h>
#include<string.h>
int reverseString(char s[100],int len);
int main()
{
    char s[100];
    printf("enter the string ");
    scanf("%[^\n]s",&s);
    int len=0;
    while(s[len]!='\0')
    {
        len++;
    }
    printf("the length of string is %d\n",len);
    reverseString (s,len);
    return 0;
}
int reverseString(char s[100],int len)
{
    for(int i=0; i<=(len-1)/2; i++)
    {
        int temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    printf("string after reversing is \n%s",s);
    return 0;
}


//OUTPUT
/*enter the string my name is mimansa
the length of string is 18
string after reversing is
asnamim si eman ym*/