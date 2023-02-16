/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float x,y,z;
    printf("enter three numbers:\r\n");
    scanf("%f %f %f",&x,&y,&z);
    if(x>y){
        if(x>z)
            printf("%f is the largest number",x);
        else
            printf("%f is the largest number",z);
    }
    else {
        if(y>z)
            printf("%f is the largest number",y);
        else
            printf("%f is the largest number",z);
    }
    return 0;
}
