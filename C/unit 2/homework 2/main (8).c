/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char o;
    float x,y;
    printf("enter operator eithe +, -, *, or /: ");
    scanf("%c",&o);
    printf("enter two operands:");
    scanf("%f %f",&x,&y);
    switch(o)
    {
        case '+':
        printf("%f + %f = %f",x,y,x+y);
        break;
        case '-':
        printf("%f - %f = %f",x,y,x-y);
        break;
        case '*':
        printf("%f * %f = %f",x,y,x*y);
        break;
        case '/':
        printf("%f / %f = %f",x,y,x/y);
        break;
        default:
        printf("error!! operator is not correct ");
        break;
    }
    return 0;
}
