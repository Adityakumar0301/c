#include <stdio.h>
int main ()
{
    int mark1, mark2 ,mark3  ,mark4, mark5;
    printf("enter the marks");
    scanf("%d %d %d %d %d", &mark1,&mark2, &mark3 ,&mark4,&mark5);
    int average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
    printf("the average is %d", average);
    return 0;   
}