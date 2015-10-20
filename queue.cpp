#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int vec[n];
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    sort(vec, vec+n);
    int sum =0;
    int cont=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]>=sum)
        {
            cont++;
            sum+= vec[i];
        }
    }
    cout << cont << endl;
    return 0;
}
