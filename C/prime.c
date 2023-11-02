#include <stdio.h>
int main(void)
{
    int x, y, c=0;
    printf("enter x: ");
    scanf("%d", &x);
   for (int i = 1; i < x; i++)
   {
      if (x%i==0)
      {
        c++;
      }
   }
   if (c==1)
   {
    printf("x is a prime number\n");
   }
   else printf("x is a composite number\n");
}