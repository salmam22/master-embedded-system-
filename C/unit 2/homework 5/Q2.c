#include <stdio.h>
int factorial (int x)
{
    if(x !=1)
       return x*factorial(x-1);

}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("factorial of %d = %ld ",num,factorial(num));
    return 0;
}