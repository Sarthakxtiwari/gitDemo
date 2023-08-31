#include <stdio.h>
int main(void)
{
    char str[10];
    printf("what's your name\n");
    scanf("%s", str);
    printf("fuck you, %s\n", &str);
}