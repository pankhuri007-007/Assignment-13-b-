#include <stdio.h>

int main()
{
    int a[100], n, i, largest, smallest;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;
    largest = smallest = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);

        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}