#include <stdio.h>
#include <string.h>
void reverse(char s[], int l)
{
    if (l == strlen(s))
        return;
    else
    {
        reverse(s, l+1);
        printf("%c", s[l]);
    }
}
int main()
{
    char s[1000];
    gets(s);
    reverse(s, 0);
    return 0;
}