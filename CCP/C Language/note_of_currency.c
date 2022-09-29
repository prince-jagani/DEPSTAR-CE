#include<stdio.h>

void main() {
    int amt,i,noteCnt,finalCnt=0;

    printf("Enter your Amount Here: ");
    scanf("%d", &amt);

    int arr[10];
    arr[0]=2000;arr[1]=500;arr[2]=200;arr[3]=100;arr[4]=50;
    arr[5]=20;arr[6]=10;arr[7]=5;arr[8]=2;arr[9]=1;

    printf("For your ammount %d\n", amt);
    for (i = 0; i < 10; i++)
    {
        noteCnt = amt / arr[i];
        amt = amt % arr[i];
        finalCnt += noteCnt;

        printf("%d Note of %d...\n",noteCnt,arr[i]);
    }
    printf("Total number of Notes is %d",finalCnt);
    
    
}
