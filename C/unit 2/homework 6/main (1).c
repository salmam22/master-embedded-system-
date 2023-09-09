/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float mark;
};
int main()
{
    struct student s;
    printf("enter student information:\n");
    printf("enter name:");
    scanf("%s", s.name);
    printf("enter roll:");
    scanf("%d", &s.roll);
    printf("enter mark:");
    scanf("%f", &s.mark);
    printf ("\ndisplaying information: \n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Mark: %.2f\n",s.mark);
  
  return 0;
}
