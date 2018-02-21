#include<stdio.h>
void main()
{
int n,rem=0,r;
printf("Enter the Number : );
scanf("%d",&n);
while(n!=0)
{
n=n%10;
rem=rem+n;
r=rem/10;
}
printf("%d",n);
}
