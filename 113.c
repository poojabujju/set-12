#include<stdio.h>
#define MAX 1000
void main()
{
    int N[MAX],K[MAX],n,count;
    int i,j;
    printf("ENTER THE ARRAY SIZE : ");
    scanf("%d",&n);
    printf("ENTER VALUE OF N : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    printf("ENTER VALUE OF K : ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&K[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(N[i]==K[j])
            {
              count++;
            }
        }
    }
    printf("REPETITIONS ARE:%d",count);
}
