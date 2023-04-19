// prime numbers in an inteval

#include <stdio.h>

int check_prime (int num);
int main ()
{
int x,y,i,flag;
printf ("enetr two numbers (interval): ");
scanf("%d  %d",&x,&y);
printf("prime numbers between %d and %d are:  ",x,y);
for (i=x+1;i<y;++i)
{
    flag = check_prime(i);
    if (flag == 0)
        printf("%d  ",i);
}
   return 0;
}
int check_prime (int num)
{
    int j,flag=0;
    for(j=2;j<=num/2;++j)
    {
        if (num%j==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}