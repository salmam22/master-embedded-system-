/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[30],num,element,location ,i;
    printf( "\nenter number of elements: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf( "\nenter the element to be inserted: ");
    scanf("%d",&element);
    printf( "\nenter the location: ");
    scanf("%d",&location);
    //create space 
    for(i=num;i>=location;i--){
        arr[i]=arr[i-1];
    }
    num++;
    arr[location-1]=element;
    for(i=0;i<num;i++){
        printf("   %d",arr[i]);
    }



    
    return 0;
}
