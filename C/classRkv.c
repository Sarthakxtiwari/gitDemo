#include <stdio.h>
int main (void)
{
    float x;

    printf("enter temprature in celsius\n");
    scanf("%f", &x);
    printf("The entered temprature in farenheit is %f\n", ((x*9/5) +32));
}