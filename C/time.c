#include <stdio.h>

int main()
{
    int x, y, z;
    do
    {
        printf("Enter a valid time in the format hh:mm:ss\n");
        scanf("%d:%d:%d", &x, &y, &z);

    } while ((x < 0 || x > 23) || (y < 0 || y > 59) || (z < 0 || z > 59));

    printf("congratulations:), you entered a valid time\n");
}
