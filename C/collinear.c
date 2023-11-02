#include <stdio.h>
int main ()
{
int x,y,p,q,a,b;
printf("enter coordinates of any three points: ");
scanf("%d,%d %d,%d %d,%d", &x,&y,&p,&q,&a,&b);
if (((y-q)/(x-p))==((y-a)/(x-b)))
{
   printf("The entered points are collinear\n");
}
else
{
    printf("the points are not collinear\n");
}
}