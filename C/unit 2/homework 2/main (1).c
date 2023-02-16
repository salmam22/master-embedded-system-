/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number you want to check: ");
    scanf("%d",&num);
    if((num%2)==0)
        printf("\r\n %d is even",num);
    else
        printf("\r\n %d is odd",num);


    return 0;
}
