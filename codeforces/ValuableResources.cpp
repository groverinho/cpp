#include <iostream>
using namespace std;

int main()
{

   long long n,x,y;
   long long minx = 1000000000, miny = 1000000000, maxx = -1000000000, maxy = -1000000000;
    cin>>n;
    for(int i = 0; i < n ;i++)
        {
        cin>>x>>y;
        minx = min(minx,x);
        maxx = max(maxx,x);
        miny = min(miny,y);
        maxy = max(maxy,y);
    }
    cout<<max((maxx - minx),(maxy - miny))*max((maxx - minx),(maxy - miny))<<endl;
    return 0;
}
