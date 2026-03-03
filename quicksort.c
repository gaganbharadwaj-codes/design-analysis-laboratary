#include <stdio.h>
#include <stdlib.h>

int count = 0;

int partition(int a[], int l, int r)
{
    int i, j, pivot, temp;
    pivot = a[l];
    i = l + 1;
    j = r;

    while (1)
    {
        while (i <= r && pivot >= a[i])
        {
            count++;
            i++;
        }

        while (pivot < a[j])
        {
            count++;
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            temp = a[l];
            a[l] = a[j];
            a[j] = temp;
            return j;
        }
    }
}

void quicksort(int a[], int l, int r)
{
    int s;
    if (l < r)
    {
        s = partition(a, l, r);
        quicksort(a, l, s - 1);
        quicksort(a, s + 1, r);
    }
}

int main()
{
    int i, n, a[10];

    printf("\nRead array size:\n");
    scanf("%d", &n);

    printf("\nRead array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("\nSorted elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    printf("\nTotal number of comparisons = %d\n", count);

    return 0;
}
