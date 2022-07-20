#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int sum = 0 ;
    printf("enter an integer : ");
    scanf("%d",&x);
    for (int i=0 ; i<=x ; i++)
    {
        sum = sum + i ;
    }
    printf("sum = %d",sum);
    return 0;
}
