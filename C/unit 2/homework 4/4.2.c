//c program to calculate factorial using recursion

#include <stdio.h>
int factorial (int x)
{
    if (x !=1)
    return x*factorial(x-1);
}
int main()
{
    int n;
    printf("enter an integer:  \n\r");
    scanf("%d",&n);
    printf("the factorial of %d is %d:  ",n,factorial(n));
return 0;
}