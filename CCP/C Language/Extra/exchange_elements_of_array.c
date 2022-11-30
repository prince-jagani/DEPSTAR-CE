#include <stdio.h>

int main()
{
    int n,i,k,c;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter K:");
    scanf("%d",&k);         // [0, 1, 2, 3, 4] --> [2, 3, 4, 0, 1] //[2, 3, 4]
    int arr[n],temp[n];

    printf("Enter Array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for (int j = k; j > 0; j--) {
        temp[j-1] = arr[n-1-k+j];
    }
    for (int j = k; j < n; ++j) {
        temp[j] = arr[j-k];
    }

    printf("Elements:");
    for (int j = 0; j < n; ++j) {
        printf("%d\t",temp[j]);
    }
    return 0;
}
