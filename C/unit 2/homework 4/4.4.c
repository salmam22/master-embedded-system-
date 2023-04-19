//c program to calculate the power of a number using recursion 

#include <stdio.h>
int power (int n1, int n2)
{
    if ( n2!=0 )
        return (n1*power(n1,n2-1));
    else 
    return 1;

}
int main()
{
int base, exp;
printf ("enter the base number: ");
scanf("%d",&base);
printf ("enter the power number: ");
scanf("%d",&exp);
printf("%d ^ %d = %d",base,exp,power(base,exp));



    return 0;
}