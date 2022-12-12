#include<stdio.h>
#define MAX 50
int binary_search(int arr[],int low,int high,int item)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]<item)
    binary_search(arr,mid+1,high,item);
    else if(arr[mid]>item)
    binary_search(arr,low,mid-1,item);
    else 
    return mid;
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
    index=binary_search(arr,0,n-1,item);
    printf("The element is found at:%d\n", index);
}