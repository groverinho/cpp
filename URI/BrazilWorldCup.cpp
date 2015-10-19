#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if (n==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }

    //cout << "Hello world!" << endl;
    return 0;
}
