/*C program to read and print employee's record using structure*/
 
#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empAge;
    char    ph[10];
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name);
    printf("Age:");            scanf("%d",&emp.empAge);
    printf("Phone no.:");      scanf("%c",&emp.ph);
    printf("\nSalary :");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Age: %d"     ,emp.empAge);
    printf("Name: %s"   ,emp.ph);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

