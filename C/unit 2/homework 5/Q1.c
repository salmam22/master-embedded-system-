#include <stdio.h>
int check_prime (int num)
{
    int j,flag=0;
    for(j=2; j<= num/2; j++)
    {
        if(num % j == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main ()
{
    int n1,n2,flag;
    printf("enter two numbers(interval): ");
    scanf("%d %d", &n1, &n2);
    printf("the prrime numbers between %d and %d are: ",n1,n2);
    for (int i=n1+1; i<n2; i++)
    {
        flag = check_prime(i);
        if(flag == 0)
           printf(" %d ", i);

    }
}