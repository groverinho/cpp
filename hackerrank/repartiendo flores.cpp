#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long r, y;
    int casos;
    cin>> casos;
    while(casos--){
    cin>>r>>y;
    long acu = 0;
    long total = 0;
    if(r>y)
    {
        acu = r-y;
        total = y;
        //   cout << total << endl;
        acu = acu/2;
          //   cout << acu << endl;
        total +=acu;
             cout << total << endl;
    }
    else if(y>r)
    {
        acu = y-r;
        total = r;
         //  cout << total << endl;
        acu = acu/2;
     //   cout << acu << endl;
        total +=acu;
             cout << total << endl;
    }
    else
    {
        cout << y << endl;
    }
    }


    return 0;
}
