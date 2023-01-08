#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n, i, sum = 0;
    float avg;
    printf("Enter n:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    avg = sum / n;
    printf("\nAverage:%f", avg);
    free(ptr);
}
