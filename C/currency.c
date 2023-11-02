#include <stdio.h>
int main ()
{
    int amt;
    printf("enter an amount: ");
    scanf("%d", &amt);
    printf("we need %d $1000 bills\n", amt/1000);
    printf("we need %d $500 bills\n", (amt%1000)/500);
    printf("we need %d $100 bills\n", ((amt%1000)%500)/100 );
    printf("we need %d $50 bills\n", (((amt%1000)%500)%100)/50);
    printf("we need %d $20 bills\n", ((((amt%1000)%500)%100)%50)/20);
    printf("we need %d $10 bills\n", (((((amt%1000)%500)%100)%50)%20)/10);

}