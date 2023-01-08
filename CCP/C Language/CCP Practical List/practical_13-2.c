#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *ptr;
    ptr = (char *)calloc(20, sizeof(char));
    printf("Enter First string:");
    gets(ptr);
    puts(ptr);
    ptr = realloc(ptr, 50);
    printf("Enter Second string:");
    gets(ptr);
    puts(ptr);
    free(ptr);
}
