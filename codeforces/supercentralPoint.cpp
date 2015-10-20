#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n  ;
  scanf("%d", &n);
  int x[n];
  int y[n];
  for(int i =0;i<n; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    int resp = 0 ;
    for(int i =0;i<n; i++)
    {
        bool up , lo , le , ri  ;
        up = lo = le = ri = false;
            for(int j =0;j<n; j++)
        {
            if( x[i] == x[j] && y[i] > y[j] )
                up = true;
            if( x[i] == x[j] && y[i] < y[j] )
                lo = true;
            if( x[i] < x[j] && y[i] == y[j] )
                le = true;
            if( x[i] > x[j] && y[i] == y[j] )
                ri = true;
        }
        if( up ==true && lo == true && le == true && ri == true )
            resp++;
    }
    printf("%d\n",resp);
    return 0;
}
