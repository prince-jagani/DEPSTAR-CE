#include "stdio.h"

void main()
{
    int len1, len2, len3, i, j;
    int a[100],b[100],arr[100];

    printf("Enter size of A: ");
    scanf("%d", &len1);
    printf("Enter Array: \n");
      for(i = 0; i < len1; i++)
    {
        scanf("%d", &a[i]);
        arr[i] = a[i];
    }

    printf("Enter size of B: ");
    scanf("%d", &len2);
    printf("Enter Array: \n");
    for(j=0; j < len2; j++)
    {
        scanf("%d", &b[j]);
        arr[i++] = b[j];
    }

    printf("\nMerged and Sorted Array: \n");
    len3 = len1 + len2;
    for(i=0; i<len3; i++)
    {
        for(j=i+1; j<len3; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\t",arr[i]);
    }
}
