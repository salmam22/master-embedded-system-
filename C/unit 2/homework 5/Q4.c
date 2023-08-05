/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int power (int x, int y);
int main ()
{
    int a,b;
    printf("enter a base number: ");
    scanf("%d", &a);
    printf("enter power number: ");
    scanf("%d", &b);
    printf(" %d^%d = %d", a, b, power(a,b));
    return 0;
}
int power (int x, int y)
{   if(y != 0)
        return (x*power(x,y-1));
    else 
        return 1;
}




