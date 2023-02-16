/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char x;
    printf("enter a character: ");
    scanf("%c",&x);
    if((x>='a'&& x<='z')||(x>='A'&& x<='Z'))
        printf("%c is an alphapet",x);
    else
        printf("%c is not an alphapet",x);
    return 0;
}




