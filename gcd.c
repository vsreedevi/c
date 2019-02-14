#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,m,s;
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++)
{
    {
    if(n%i ==0 && m%i==0)
    {
     s=i;
    }
    }
}
printf("%d",s);
return 0;
}
