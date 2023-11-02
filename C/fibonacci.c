#include <stdio.h>
int main(void)
{
    
    int x, y, a = 0,  b = 1;
    
    
    printf(" enter the number of elements of the sequence you want to print : ");
    scanf("%d", &x);
    printf("%d\n", a);
    printf("%d\n", a + b);

    for (int i = 2; i < x; i++)
    {
        printf("%d\n", y = a + b);

        a = b;
        b = y;
    }
}
