#include <stdio.h>
int main()
{
    char name[30], dep[30];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your department: ");
    scanf("%s", dep);
    // printf("Name is %s and department is %s", name, dep);
    int rollno;
    printf("Enter your roll number: ");
    scanf("%d", &rollno);
    printf("my Name is %s and department is %s and roll number is %d", name, dep, rollno);
    return 0;
}


