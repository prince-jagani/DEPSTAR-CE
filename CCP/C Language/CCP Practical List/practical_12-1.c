#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[20];
    int len = 0;
    printf("\tID:22DCE028\n");
    fp = fopen("DEMO.txt", "r");
    if (fp == NULL)
    {
        printf("File doesn't exist!");
        exit(1);
    }
    fseek(fp, 1, 2);
    len = ftell(fp);
    rewind(fp);
    fgets(str, len, fp);
    printf("String in file:%s\n", str);
    strrev(str);
    printf("Reverse string:%s", str);
    fclose(fp);
}
