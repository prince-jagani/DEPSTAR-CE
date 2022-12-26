#include <stdio.h>
struct employee
{
    int age;
    char name[30];
    int salary;
    struct address
    {
        int house_no;
        int pin;
    } a;

} e;
void main()
{
    printf("\t   ID:22DCE028\n");
    printf("Enter age:");
    scanf("%d", &e.age);
    fflush(stdin);
    printf("Enter name:");
    scanf("%s", e.name);
    printf("Enter salary:");
    scanf("%d", &e.salary);
    printf("Enter house number:");
    scanf("%d", &e.a.house_no);
    printf("Enter pincode:");
    scanf("%d", &e.a.pin);

    printf("\n\nAge:%d", e.age);
    printf("\nName:%s", e.name);
    printf("\nsalary:%d", e.salary);
    printf("\nHouse number:%d", e.a.house_no);
    printf("\nPincode:%d", e.a.pin);
}
