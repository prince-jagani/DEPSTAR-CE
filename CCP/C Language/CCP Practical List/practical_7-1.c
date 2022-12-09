#include <stdio.h>

void main() {
    int a[25];
    int p=0,n=0,e=0,o=0;
    
    for(int i = 0; i < 25; i++) {
        scanf("%d", &a[i]);
        
        if(a[i] < 0) n++;
        else p++;
        
        if(a[i] % 2 == 0) e++;
        else o++;
    }
    
    printf("\nPositive numbers = %d\n",p);
    printf("Negative numbers = %d\n",n);
    printf("Even numbers = %d\n",e);
    printf("Odd numbers = %d",o);
    
}
