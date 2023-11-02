#include <stdio.h>
#include <math.h>
int main(void)
{
    int p, q, x, y, z;
    printf("enter radius: ");
    scanf("%d", &z);
    printf("enter x and y coordinate of centre: ");
    scanf("%d, %d", &x, &y);
    printf("enter x and y coordinates of any point: ");
    scanf("%d, %d", &p, &q);
    if (pow(p - x, 2) + pow(q - y, 2) > pow(z, 2))
    {
        printf("the point lies outside the circle:)\n");
    }
    else if (pow(p - x, 2) + pow(q - y, 2) == pow(z, 2))
    {
        printf("the point lies on the circle:)\n");
    }
    else
    {
        printf("the point lies inside the circle:)\n");
    }
}