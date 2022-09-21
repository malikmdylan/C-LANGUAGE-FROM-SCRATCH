//using structures display details of a students in tabular form using structures
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student s[10];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }
    printf("Name\tRoll\tMarks of %d students are: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%f ", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}
//