/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
# define pi 3.1415
# define area(r)(pi*(r)*(r))
int main()
{
    int radius;
    float area;
    printf("enter the radius: ");
    scanf("%d", &radius);
    area = area(radius);
    printf("area=%.2f",area);

    return 0;
}
