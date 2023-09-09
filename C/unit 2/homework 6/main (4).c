/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct student {
    char name [50];
    int roll;
    float marks;
};

int main()
{
    struct student s[10];
    int i;
    printf("enter information of students:\n");
    for(i=0; i<10;i++)
    {
       s[i].roll = i+1;
       printf("\nfor roll number %d\n", s[i].roll);
       printf("enter name: ");
       scanf("%s", s[i].name);
       printf("enter mark: ");
       scanf("%f", &s[i].marks);
       
    }
    printf("\ndisplaying information of students\n");
    for(i=0; i<10;i++)
    {
        printf("\ninformation for rol number %d\n", s[i].roll);
        printf ("name: ");
        puts(s[i].name);
        printf("marks:%.1f", s[i].marks);
    }
    return 0;
}
