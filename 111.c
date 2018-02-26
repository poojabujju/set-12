#include<stdio.h>
void main()
{
int n,count;
printf("Enter the Number : ");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("%d",count);
}
