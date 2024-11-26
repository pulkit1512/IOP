/* A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A
FILE TO STORE DETAILS OF N STUDENTS*/
#include <stdio.h>
#include <stdlib.h>
typedef struct details
{
    int roll_no;
    char name[100];
    int tmarks;
} data;
int main()
{
    int n;
    printf("<enter number of student information input>");
    scanf("%d", &n);
    FILE *ptr = fopen("LNMIITSTUDENT.txt", "w");
    if (ptr == NULL)
    {
        printf("\nfile does not open");
    }
    data student[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n%d)ENTER YOUR ROLL NO->", i + 1);
        scanf("%d", &student[i].roll_no);
        printf("\nENTER YOUR NAME->");
        scanf(" %[^\n]s", student[i].name); // Use %[^\n]s to read strings with spaces
        printf("\nENTER YPUR TOTAL MARKS->");
        scanf("%d", &student[i].tmarks);

        // write students details in file
        fprintf(ptr, "%d %s %d", student[i].roll_no, student[i].name, student[i].tmarks);
    }
    fclose(ptr);
    printf("\nDATA INPUT SUCCESSFULLY INTO THE FILE");
    return 0;
}
