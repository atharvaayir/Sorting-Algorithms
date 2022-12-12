#include<stdio.h>
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int i,j;
    
    int inc;
    printf("Enter the increment\n");
    scanf("%d",&inc);
    while(inc>=1)
    {
        for(i=inc;i<n;i++)
        {
            int k=a[i];
            for(j=i-inc;k<a[j]&&j>=0;j-=inc)
            {
                a[j+inc]=a[j];
            }
            a[j+inc]=k;
        }
        inc-=2;
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    
}