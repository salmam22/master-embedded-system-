/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char x;
    printf("enter an alphabet: ");
    scanf("%c",&x);
    if(x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'||x=='a'||x=='A'||x=='e'||x=='E')
        printf("%c is vowel",x);
    else
        printf("%c is consonant",x);
    return 0;
}
