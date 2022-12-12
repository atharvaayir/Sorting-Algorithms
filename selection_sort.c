#include<stdio.h>
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int i,j;
    for(i=0;i<n;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(i!=min)
        {
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
   // printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    
}