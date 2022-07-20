#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);
    int temp = a;
    a = b;
    b = temp;
    printf("after swapping , value of a = %d\n",a);
    printf("after swapping , value of b = %d",b);

}
