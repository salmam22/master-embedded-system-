/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct complex {
    float real;
    float imag;
}x;
struct complex add (struct complex n1,struct complex n2)
{
    struct complex sum;
    sum.real = n1.real+n2.real;
    sum.imag = n1.imag + n2.imag;
    return sum;
}
int main()
{
    struct complex n1,n2,sum;
    printf("for the first complex number\n");
    printf ("enter real and imaginary respectively: \n");
    scanf(" %f %f", &n1.real,&n1.imag);
    printf("for the second complex number\n");
    printf ("enter real and imaginary respectively: \n");
    scanf(" %f %f", &n2.real,&n2.imag);
    sum = add(n1,n2);
    printf("sum = %.1f + %.1fi",sum.real,sum.imag);

    return 0;
}
