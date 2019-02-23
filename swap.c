#include <stdio.h>
#include<string.h>
void main()
{
    int n,m,temp;
    scanf("%d %d",&n,&m);
    temp=n;
    n=m;
    m=temp;
    printf("%d %d",n,m);
}
