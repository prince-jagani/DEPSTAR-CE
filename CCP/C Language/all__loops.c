#include <stdio.h>

void main() {
    
    int i=0;
    printf("For loop\n");
    for(i=0; i<10; i++)
    {
        printf("%d ",i);
    }
    printf("\nWhile Loop\n");
    i=0;
    while(i<10){
        printf("%d ",i);
        i++;
    }
    printf("\nDo.. While Loop\n");
    i=0;
    do{
        printf("%d ", i);
        i++;
    }while(i<10);
    
}
