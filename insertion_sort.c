#include<stdio.h>
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int i,j;
    for(i=1;i<n;i++)
    {
        int k=a[i];
        for(j=i-1;a[j]>k&&j>=0;j--)
        a[j+1]=a[j];

        a[j+1]=k;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}