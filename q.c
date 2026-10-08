#include <stdio.h>
int main()
{
    int id;
    char name[40];
    int  basicsalary;
    printf(" enter id \n, enter name\n, basic salary\n");
    scanf("%d %s %d",&id, &name, &basicsalary);
    printf("id is %d", id );
    printf(" name is %s", name);
    printf("basic salary is %d", basicsalary   );
    return 0;
}