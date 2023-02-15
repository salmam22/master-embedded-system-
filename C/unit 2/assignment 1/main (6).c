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
    temb=a;
    a=b;
    b=temb;
    printf("After swapping value of a =%f", a);
    printf("\r\nAfter swapping value of b =%f", b);

    return 0;
}
