#include<stdio.h>

int main() 
{
int n,hour,min;
scanf("%d",&n);
hour=n/60;
min=n%60;
printf("%d %d",hour,min);
}
