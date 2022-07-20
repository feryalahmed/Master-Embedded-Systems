#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("enter three numbers : \n");
    scanf("%f %f %f",&x,&y,&z);
    if (x>y)
    {
        if (x>z)
            printf("largest number = %f",x);
        else
            printf("largest number = %f",z);
    }
    else
    {
        if (y>z)
            printf("largest number = %f",y);
        else
            printf("largest number = %f",z);
    }


    return 0;
}
