#include <stdio.h>

int main(void)
{
    int x;
    printf("size of the solarpanel in sq.feet: ");
    scanf("%d", &x);
    printf("the total cost of installation and maintainance for one year would be $%d\n", x * 100 + 10000 + 250*x + 10 * x);
}