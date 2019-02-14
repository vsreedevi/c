#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,a,d,sum=0,s;
scanf("%d%d%d",&n,&a,&d);
for(int i=1;i<n;i++)
{
s=a+(n-1)*d;
sum=sum+s;
}
printf("%d",sum);
return 0;
}
