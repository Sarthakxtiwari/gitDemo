#include<stdio.h>
#include<math.h>

int main()
{
    int n,temp;
    int digits =0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while (temp!=0)
    {
        temp /= 10;
        digits++;
    }
    int base = (pow(10,(digits-1)));
    n = (n%base) + ((n%10)*base) - (n%10) + (n/base);
    printf("The swaped number is %d\n",n);
}