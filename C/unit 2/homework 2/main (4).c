/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float x;
    printf("enter a number ");
    scanf("%f",&x);
    if(x>=0)
    {
        if(x==0)
            printf("you entered zero");
        else
            printf("%f is positive ",x);
        
    }
    else
        printf("%f is negative ",x);

    return 0;
}
