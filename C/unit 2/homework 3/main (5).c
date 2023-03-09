/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[30],num,element,i;
    printf( "\nenter number of elements: ");
    scanf("%d",&num);
     printf( "\nenter the values: ");
     for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf( "\nenter the element to be searched: ");
    scanf("%d",&element);
    i=0;
    while(i<num && element!=arr[i]){
        i++;
    }
    if(i<num)
        printf("the number is found at location %d",i+1);
    
    else
        printf("element not found");




    return 0;
}
