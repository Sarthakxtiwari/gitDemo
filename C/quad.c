#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, p, q;
    printf("enter a, b, c: ");
    scanf(" %f, %f, %f", &a, &b, &c);
    D = pow(b, 2) - (4 * a * c);
    p = (-b + pow(D, 0.5)) / (2 * a);
    q = (-b - sqrt(D)) / (2 * a);
    if (D >= 0)
    {
        printf("The equation hence formed is %fx^2 + %fx + %f and the roots of the equation are %f & %f\n", a, b, c, p, q);
    }
    else if (D < 0)
{
    printf("The equation hence formed is %fx^2 + %fx + %f and the roots of the equation are imaginary\n", a, b, c);
}
   
}