#include<stdio.h>
#define MAX 100
void heapify(int arr[],int i,int n)
{
    int l=2*i;
    int r=l+1;
    int largest=i;
    if(l<=n&&arr[l]>arr[largest])
    largest=l;
    if(r<=n&&arr[r]>arr[largest])
    largest=r;
    if(i!=largest)
    {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        heapify(arr,largest,n);
    }
}
void heap_build(int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    heapify(arr,i,n);
}
int del_root(int arr[],int *size)
{
    int max=arr[1];
    arr[1]=arr[*size];
    (*size)--;
    heapify(arr,1,*size);
    return max;
}
void heap_sort(int arr[],int size)
{
  int max;
  heap_build(arr,size);
  while(size>1)
  {
    max=del_root(arr,&size);
    arr[size+1]=max;
  }

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[MAX],i;
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    heap_sort(arr,n);
    for(i=1;i<=n;i++)
    printf("%d ",arr[i]);
}