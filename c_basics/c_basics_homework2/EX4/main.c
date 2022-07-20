#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("enter a number : ");
    scanf("%f",&x);
    if (x>0)
        printf("%f is positive",x);
    else if (x<0)
        printf("%f is negative",x);
    else
        printf("you entered zero");

    return 0;
}
