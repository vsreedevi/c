#include <stdio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char s[20];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        count++;
    }
    printf("%d",count);
}
