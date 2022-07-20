#include <stdio.h>
#include <stdlib.h>

int main()
{
// using summing to swap 2 numbers without temp variable
    int a,b;
    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("after swapping , value of a = %d\n",a);
    printf("after swapping , value of b = %d\n",b);

// using XOR to swap 2 numbers without temp variable
    int x,y;
    printf("enter value of x : ");
    scanf("%d",&x);
    printf("enter value of y : ");
    scanf("%d",&y);

    x = x^y;
    y = x^y;
    x = x^y;

    printf("after swapping , value of x = %d\n",x);
    printf("after swapping , value of y = %d\n",y);


}
