/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char arr[30],a;
    int count=0,i;
    printf( "\nenter a string: ");
    gets(arr);
    printf( "\nenter a chcaracter to find frequency: ");
    scanf("%c",&a);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==a)
            ++count;
    }
    printf("frequency of %c : %d",a,count);
    
    return 0;
}
