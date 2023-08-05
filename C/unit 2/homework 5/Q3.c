/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void Reverse ()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        Reverse();
        printf ("%c" , c);
    }
    
}
int main()
{
    printf("enter a sentence: ");
    Reverse();
    return 0;
}