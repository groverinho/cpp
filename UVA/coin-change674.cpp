#include <stdio.h>
#define N 8000
#define M 5
static int vect[N] = {1, 1, 1, 1, 1};

int main()
{
    for(int j = M; j < N; ++j)
        vect[j] += vect[j - 1];

    for(int j = 5; j < N; ++j)
        vect[j] += vect[j - 5];

    for(int j = 10; j < N; ++j)
        vect[j] += vect[j - 10];

    for(int j = 25; j < N; ++j)
        vect[j] += vect[j - 25];

    for(int j = 50; j < N; ++j)
        vect[j] += vect[j - 50];
           /* for(int j = 0; j < 100; ++j)
       printf("%d\n", vect[j]);*/
    int n;
    while(scanf("%d", &n) != EOF)
        printf("%d\n", vect[n]);

    return 0;
}
