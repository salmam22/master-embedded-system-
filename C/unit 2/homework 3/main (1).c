/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float m1[2][2];
    float m2[2][2];
    float m3[2][2];
    printf("enter the elements of matrix 1\n\r");
    for(int r=0;r<2;r++)
    {
            for(int c=0;c<2;c++)
            {
                printf("enter a%d%d ",r+1,c+1);
                scanf("%f",&m1[r][c]);
            }

    }
     printf("enter the elements of matrix 2\n\r");
    for(int r=0;r<2;r++)
    {
            for(int c=0;c<2;c++)
            {
                printf("enter b%d%d ",r+1,c+1);
                scanf("%f",&m2[r][c]);
            }
    }
    for(int r=0;r<2;r++)
    {
            for(int c=0;c<2;c++)
            {
                m3[r][c]=m1[r][c]+m2[r][c];
            }
    }
    printf("sum matrix: \n\r");
     for(int r=0;r<2;r++)
    {
            for(int c=0;c<2;c++)
            {
                printf("%f\t ",m3[r][c]);
            }
            printf("\n");
    }

    
    
    

    return 0;
}
