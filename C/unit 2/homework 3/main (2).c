/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    float num[50],sum=0.0,average;
    printf("enter the number of data: ");
    scanf("%d",&n);
    while(n>50||n<0)
    {
        printf("error, enter a number between 0 and 50 \n");
        printf("enter the number again: ");
        scanf("%d",&n);
    }
    for(i=0;i<n;i++){
        printf("%d. enter number: ",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    average=sum/n;
    printf("Average = %f",average);

    

    return 0;
}
