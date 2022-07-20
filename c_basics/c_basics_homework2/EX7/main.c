#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int f=1;
    int i;
    printf("enter an integer : ");
    scanf("%d",&x);
    if (x<0)
        printf("Error!! factorial of negative number doesn't exist");
    else if (x==0)
    {
        printf("factorial = %d",f);
    }
    else
    {
        for (i =1 ; i<=x ; i++)
        {
            f = f*i ;
        }
        printf("factorial = %d",f);
    }
    return 0;
}
