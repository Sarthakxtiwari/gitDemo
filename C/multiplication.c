#include <stdio.h>
int main(void)
{
    int x, y;
    printf("enter a number\n");
    scanf("%d", &x);

    printf("enter another number\n");
    scanf("%d", &y);

    printf("the product of the first entered number and the second one is %d\n", x * y);
}