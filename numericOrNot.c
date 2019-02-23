#include<stdio.h>

int main() 
{
char s[10],i;
scanf("%s",&s);
for(i=0;s[i]!=0;i++)
{
    if(s[i]>'a' && s[i]<'z')
    {
        printf("No");
    }
    else
    {
        printf("yes");
    }
}
    
}
