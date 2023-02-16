/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,count;
    unsigned long int factorial=1;
    printf("enter an integer: ");
    scanf("%d",&x);
    if(x<0)
        printf("error!! factorial of a negative number doesnt exist");
    else
    {
        for(count=1;count<=x;count++)
            factorial *=count;
    }
    printf("factorial= %lu",factorial);
    return 0;
}






