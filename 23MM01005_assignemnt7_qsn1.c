#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string ");
    char s[100];
    gets(s);
    printf("Find a word to be searched ");
    char f;
    scanf("%c",&f);
    int freq=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==f)
            freq++;
    }
    printf("Frequency of %c is %d",f,freq);
    return 0;
}