#include <stdio.h>
int main()
{
    int x, y, z = 0, remainder;
    
    do
    {
        printf("Enter a 5-digit number: ");
        scanf("%d", &x);
    } while (x<10000||x>99999);
    
    y = x;

    while (x != 0)
    {
        remainder = x % 10;
        z = z * 10 + remainder;
        x = x / 10;
    }

    if (y == z)
    {
        printf("%d is a palindrome.\n", y);
    }
    else
    {
        printf("%d is not a palindrome.\n", y);
              
    }
}