/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct distance
{
    int feet;
    float inch;
}d1,d2,sum;
int main()
{
    printf("eneter information for first distance\n");
    printf("enter feet: ");
    scanf("%d", &d1.feet);
    printf("enter inch: ");
    scanf("%f", &d1.inch);
    printf("eneter information for second distance\n");
    printf("enter feet: ");
    scanf("%d", &d2.feet);
    printf("enter inch: ");
    scanf("%f", &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    
    if (sum.inch > 12.0)
    {
        sum.inch = sum.inch-12.0;
        sum.feet++;
    }
    printf("\nsum of distances=%d\-'%.1f\"", sum.feet, sum.inch);
  return 0;
}
