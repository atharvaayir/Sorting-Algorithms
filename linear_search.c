#include <stdio.h>
#define MAX 50
int linear(int arr[], int n, int item)
{
    int i, index = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            index = i;
            break;
        }
    }
    return index;
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
    index = linear(arr, n, item);
    printf("The element is found at:%d\n", index);
}