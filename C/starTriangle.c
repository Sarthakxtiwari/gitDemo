#include <stdio.h>
int main()
{
    int x;
    do
    {
        printf("enter the size of triangle: ");
        scanf("%d", &x);
    } while (x < 1);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}