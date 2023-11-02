#include <stdio.h>
int main(void)
{
    int a;
    printf("enter x: ");
    scanf("%d", &a);
    a = (a > 100 ? 69 : 420);
    printf("%d\n", a);
}