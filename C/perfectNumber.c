#include <stdio.h>

int main(void)
{
    int x, y, z=0;
    printf("Enter a number to check if it is perfect or not.\n ");
    scanf("%d", &x);

    for (int i = 1; i < x; i++)
    {
       if (x%i==0)
       {
        z= z+i;
       }
       
    }
    if (z==x)
    {
      printf("You entered a perfect number:)\n");
    }
    else printf("You did not enter a perfect number:( \n");
}