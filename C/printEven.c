#include <stdio.h>
int main(void)
{
    int n;
    printf("till where do you want to print even numbers: ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i += 2)
    {
        printf("%d\n", i);
    }
        
}