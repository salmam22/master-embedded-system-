/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10][10],t[10][10],r,c,x,y;
    printf("enter rows and columns of the matrix: ");
    scanf("%d %d",&r,&c);
    printf("\nenter elemnts of matrix: \n");
    for(x=0;x<r;x++)
    {
            for(y=0;y<c;y++)
            {
                printf("enter element a%d%d  ",x+1,y+1);
                scanf("%d",&a[x][y]);
            }
    }
    printf("\n entered matrix: \n");
    for(x=0;x<r;x++)
    {
            for(y=0;y<c;y++)
            {
                printf("%d  ",a[x][y]);
                if(y==c-1)
                    printf("\n\n");
            }
    }
    for(x=0;x<r;x++)
    {
            for(y=0;y<c;y++)
            {
                t[x][y]=a[y][x];
            }
    }
     printf("\n transpose matrix: \n");
    for(x=0;x<c;x++)
    {
            for(y=0;y<r;y++)
            {
                printf("%d  ",t[x][y]);
                if(y==r-1)
                    printf("\n\n");
            }
    }



    return 0;
}
