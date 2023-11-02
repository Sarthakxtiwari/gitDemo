#include <stdio.h>
int primeInRange();

int main(void)
{
    //calling the function
    primeInRange();
}
//defining the function

int primeInRange(void)
{
    int x, y, z = 0;
    printf("enter a range in format x, y\n");
    scanf("%d, %d", &x, &y);
    for (int t = x; t <= y; t++)
    {
        for (int i = 1; i < t; i++)
        {
            if (t % i == 0)
            {
                z++;   
            }
        }
        if (z == 1)
        {
            printf("%d\n", t);
        }
        z=0;
    }
    return 0;
}