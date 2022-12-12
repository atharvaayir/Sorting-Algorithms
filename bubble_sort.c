#include<stdio.h>
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int i,j;
    int xchanges=0;
    for(i=0;i<n;i++)
    {
        xchanges=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                xchanges++;
            }
        }
        if(xchanges==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
}