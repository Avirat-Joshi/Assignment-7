#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    char new[100];
    gets(s);
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            new[j]=s[i];
            j++;
        }
    }
    new[j]='\0';
    printf("%s",new);
    return 0;
}