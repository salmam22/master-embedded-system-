/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    int count,sum=0;
    printf("enter an integer: ");
    scanf("%d",&x);
    for(count=1;count<=x;count++){
        sum +=count;
    }
    printf("sum = %d",sum);

    return 0;
}
