//8 CELLS AMCAT PROGRAM
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1000],i,j,l,days,k=0,b[1000];
    scanf("%d %d",&n,&days);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    while(k<days)
    {
        b[n]=0;
        for(i=0;i<n;i++)
        {
            if(((b[i-1]==0)&&(b[i+1]==0))||((b[i-1]==1)&&(b[i+1]==1)))
            {
                a[i]=0;
            }
            else
            {
                a[i]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        k++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
