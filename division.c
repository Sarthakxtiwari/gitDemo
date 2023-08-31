#include <stdio.h>
int main(void)
{
    float x, y;
    printf("enter a number\n");
    scanf("%f", &x);

    printf("enter another number\n");
    scanf("%f", &y);
    if (y==0)
    {
        printf("fuck you\n");
    }
    else 
    printf("the ratio of the first entered number to the second one is\n %f\n", x / y);
}
