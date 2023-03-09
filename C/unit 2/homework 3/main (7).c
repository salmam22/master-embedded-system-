/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char arr[30];
    int i;
    printf( "\nenter a string: ");
    gets(arr);
    for(i=0;arr[i]!='\0';i++);
    printf("the length of the string is %d ",i);
    return 0;
}
