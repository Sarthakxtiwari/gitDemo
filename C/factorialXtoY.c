#include <stdio.h>
int main()
{
    int x, y;
    int n = 1;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    for ( x =x; x <= y; x++)
    {
        for (int r = x; r > 0; r--)
        {
            n = n * r;
        }
        printf("%d\n", n);
        n =1;
    }
}