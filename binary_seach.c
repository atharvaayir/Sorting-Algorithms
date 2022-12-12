#include<stdio.h>
#define MAX 50
int binary(int arr[],int n,int item)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item<arr[mid])
        high=mid-1;
        else if(item>arr[mid])
        low=mid+1;
        else 
        return mid; 
    }
    return -1;
}
int main()
{
    int i, n, item, arr[MAX], index;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched:");
    scanf("%d", &item);
    index = binary(arr,n,item);
    printf("The element is found at:%d\n", index);
}