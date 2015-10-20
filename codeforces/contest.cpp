#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b,c,d;
    cin>> a>>b>>c>>d;
    int  misha1, vasya1;
    misha1 = a-((a/250)*c);
    vasya1 = b-((b/250)*d);
    int misha2, vasya2;
    misha2 = (3*a)/10;
    vasya2 = (3*b)/10;
    misha1 = max(misha1,misha2);
    vasya1 = max(vasya1,vasya2);
    if(misha1> vasya1)
    cout << "Misha" << endl;
    else if(vasya1>misha1)
    cout << "Vasya" << endl;
    else if (vasya1==misha1)
    cout << "Tie" << endl;
    return 0;
}
