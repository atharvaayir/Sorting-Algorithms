#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *link;
    int data;
} *start = NULL;
int largest_digit_num()
{
    struct node *p = start;
    int large = 0;
    while (p != NULL)
    {
        if (p->data > large)
            large = p->data;
    }
    int digits;
    while (large)
    {
        large = large / 10;
        digits++;
    }
    return digits;
}
int digit_val(int n, int k)
{
    int digit;
    for (int i = 1; i <= k; i++)
    {
        digit = n % 10;
        n = n / 10;
    }
    return digit;
}
void radix_sort()
{
    int i, k, least_sig, most_sig;
    struct node *p, *rear[10], *front[10];
    least_sig = 1;
    most_sig = largest_digit_num();
    for (i = least_sig; i <= most_sig; i++)
    {
        for (k = 0; k < 10; k++)
        {
            rear[k] = NULL;
            front[k] = NULL;
        }
        for (p = start; p != NULL; p = p->link)
        {
            int dig = digit_val(p->data, i);
            if (front[dig] == NULL)
            {
                front[dig] = p;
            }
            else
                rear[dig]->link = p;
            rear[dig] = p;
        }
        k = 0;
        while (front[k] == NULL)
        {
            k++;
        }
        while (k < 9)
        {
            if (rear[k + 1] != NULL)
                rear[k]->link = front[k + 1];
            else
                rear[k + 1] = rear[k];
            k++;
        }
        rear[9]->link = NULL;
    }
}
int main()
{

    int n;
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    while (n--)
    {
        int item;
        printf("Enter data\n");
        scanf("%d", &item);
        struct node *q = start;
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = item;
        tmp->link = NULL;
        if (q == NULL)
        {
            start = tmp;
        }
        else
        {
            while (q->link != NULL)
            {
                q = q->link;
            }
            q->link = tmp;
        }
    }
    radix_sort();
    for (struct node *q = start; q != NULL; q = q->link)
    {
        printf("%d ", q->data);
    }
}
