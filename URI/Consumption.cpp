#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int d;
    double t;
    scanf("%d",&d);
    scanf("%lf",&t);
     printf("%.3f  km/l\n",(d/t));

    return 0;
}
