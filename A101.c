//  WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”. 
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
    FILE *ptr = fopen("LNMIITSTUDENT.txt", "w");
    if (ptr == NULL)
    {
        printf("\nfile does not open");
    }
    int n;
    printf("<enter number of student data APPEND>");
    scanf("%d", &n);
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
    printf("\nDATA APPEND SUCCESSFULLY INTO THE FILE");
    return 0;
}
