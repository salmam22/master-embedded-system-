//c program to reverse a sentence using recursion 

#include <stdio.h>
void reverse()
{
    char c;
    scanf("%c", &c);
    if(c !='\n' )
    {
        reverse();
        printf("%c", c);
    }

}
int main()
{
printf("enter a sentence: ");
reverse();
return 0;
}