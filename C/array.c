#include <stdio.h>
const int N = 3;
float average(float x[]);
int main(void)

{
    float a;
    float scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("what is your score: ");
        scores[i] = scanf("%f", &scores[N]);
    }
    a = average(scores);
    printf("Average: %f\n", a);
}

float average(float x[])
{

    int y = 0;
    for (int i = 0; i < N; i++)
    {
        y += x[i];
    }
    return y / (float)N;
}
