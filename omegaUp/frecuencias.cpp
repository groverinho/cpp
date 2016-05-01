#include <iostream>

using namespace std;

int main()
{
    int p;
    cin>> p;
    int n;
    cin>>n;
    int vec[n];
    int vec2[p+1];
    for(int i=0; i<(p+1);i++)
    {
    vec2[i]=0;
    }
    for(int i=0; i<n;i++)
    {
        int aux;
        cin>> aux;
        vec2[aux] += 1 ;
    }

    for(int i=1; i<(p+1);i++)
    {
    cout<<i<<"-" << vec2[i] << endl;
    }


    return 0;
}
