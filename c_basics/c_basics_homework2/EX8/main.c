#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float x,y;
    printf("enter operator either + or - or * or / : ");
    scanf("%c",&a);
    printf("enter two operands : ");
    scanf("%f %f",&x,&y);
    switch (a)
    {
    case '+' :
        {
            printf("%f + %f = %f",x,y,x+y);
        }
        break;
    case '-' :
        {
            printf("%f - %f = %f",x,y,x-y);
        }
        break;
    case '*' :
        {
            printf("%f * %f = %f",x,y,x*y);
        }
        break;
    case '/' :
        {
            printf("%f / %f = %f",x,y,x/y);
        }
        break;
    default:
        {
            printf("ERROR!");
        }

    }
    return 0;
}
