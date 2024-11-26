/*WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER ,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE  A
STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE
ALONG WITH THE BASIC A PAY. */

#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct employee
    {
        int employeenumber;
        char employeename[100];
        float basicpay;
    } emplyee;
    emplyee *m, n[100];
    int num;
    printf("enter the no of employee data isert:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        m = &n[i];
        printf("\n%d) enter the details of employee %d",i+1,i+1);
        printf("\nenter the employee number;");
        scanf("%d", &m->employeenumber);
        // fgets((m+i)->employee_name,sizeof((m+i)->employee_name),stdin);
        printf("Enter employee name=");
        scanf(" %[^\n]s", &m->employeename);
        printf("enter the basic pay of employee:");
        scanf("%f", &m->basicpay);
    }
    printf("\nthe details of emplyees are as below:\n");
    for (int i = 0; i < num; i++)
    {
        m = &n[i];
        printf("\n%d)The details of employee %d",i+1,i+1);
        printf("\nemployee number:%d\nemployee name:%s\nemployee basic pay:%f", m->employeenumber, m->employeename, m->basicpay);
    }
    return 0;
}