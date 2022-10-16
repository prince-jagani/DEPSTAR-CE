#include<stdio.h>
#include<stdlib.h>
void main()
{
    // 1. malloc
    /*int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    //ptr=(float *)malloc(5*sizeof(float));  // ahiya game te data type chale
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[5]=5;
    //ama insilize no karelu hoi to garbased value print thai
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",ptr[i]);
        // printf("%f\n",ptr[i]);
    }*/


    // 2. callon
   /* int *ptr;
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    //ptr=(int *)calloc(5,sizeof(int));  // ahiya n ni jagyaye game te etle jetla data tyape ni space joti hoi te lakh vana
    // ama value incilize no kari hoi to te zero valu gane
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }*/


    // 3. free
    /*int *ptr;
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);

    // ahiya uper nu calloc free thai jase

    ptr=(int *)calloc(2,sizeof(int));
    printf("\n\n");
    for(int i=0;i<2;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    // aa uper nu calloc free thai jai etle new callon ma apde jetli joti hoi etli jagaya lai sakiye
    */



   // 4. realloc
   int *ptr;
   ptr=(int *)calloc(5,sizeof(int));
   
   printf("Enter number(5) : ");
   for(int i=0;i<5;i++)
   {
        scanf("%d",&ptr[i]);
   }

   ptr=realloc(ptr,8);
   printf("Enter number(8) : ");
   for(int i=0;i<8;i++)
   {
        scanf("%d",&ptr[i]);
   }

   ptr=realloc(ptr,3);
   printf("Enter number(3) : ");
   for(int i=0;i<3;i++)
   {
        scanf("%d",&ptr[i]);
   }


   // printf of uper ni loop

    for(int i=0;i<5;i++)
    {
        printf("number is %d - %d\n",i,ptr[i]);
    }
    printf("\n\n");

    for(int i=0;i<8;i++)
    {
        printf("number is %d - %d\n",i,ptr[i]);
    }
    printf("\n\n");

    for(int i=0;i<3;i++)
    {
        printf("number is %d - %d\n",i,ptr[i]);
    }

}