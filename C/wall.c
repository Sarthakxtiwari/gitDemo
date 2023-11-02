#include <stdio.h>
int main(void)
{
    int x;

    do
    {    
        printf("enter wall size\n"); 
        scanf("%d", &x);
    } while (x < 1);

    for (int i = 0; i < x; i++)
        
    {
        for (int j = 0; j < x; j++)
            
        {
            printf("#");
        }
        printf("\n");
    }
}