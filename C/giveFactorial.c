#include <stdio.h>
int main(void)
{
    int n;
    int x = 1;
    printf("enter a number: ");
    scanf("%d", &n); 
   for ( int i = n; i >0; i--)
   {
       x=x*i;
   }
   printf("%d\n", x);
    
}