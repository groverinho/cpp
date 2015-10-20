#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int v[n];
    double den = n;
    int t =0;
    for(int i =0;i<n; i++)
    {
        cin>>v[i];
        t+= v[i];
    }

    cout <<setprecision(12)<< (t/den) << endl;
    return 0;
}
