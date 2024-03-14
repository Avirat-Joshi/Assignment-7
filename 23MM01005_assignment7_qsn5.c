#include <stdio.h>
#include <string.h>
void palin(char s[])
{
    int l=0;
    while(s[l]!='\0')
        l++;
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            printf("String is not palindrome");
            return;
        }
    }
    printf("String is palindrome");
}
int main()
{
    char s[1000];
    gets(s);
    palin(s);
    return 0;
}