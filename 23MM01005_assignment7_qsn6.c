#include <stdio.h>
#include <string.h>
void search(char s[],  char t[])
{
    int check;
    for(int i=0;i<=strlen(s)-strlen(t);i++)
    {
        for(int j=i;j<i+strlen(t);j++)
        {
            check=1;
            if(s[j]!=t[j-i])
            {
                check=0;
                break;
            }
        }
        if(check==1)
            break;
    }
    if(check==1)
        printf("Substring is present ");
    else
        printf("Substring is not present ");    
}
int main()
{
    char s[1000];
    printf("Enter string ");
    gets(s);
    char t[1000];
    printf("Enter string to be searched ");
    gets(t);
    search(s, t);
    return 0;
}