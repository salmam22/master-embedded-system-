/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a,b,temb;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping value of a =%f", a);
    printf("\r\nAfter swapping value of b =%f", b);

    return 0;
}


