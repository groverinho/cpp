#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int m ;
        cin>>m;
        int maxi=0;
        int v[m];

        for(int i = 0; i<m;i++)
        {
            cin>>v[i];

        }
        for(int i = 0; i<m-1;i++)
        {
         if(maxi<v[i+1]-v[i])
            maxi = v[i+1]-v[i];

        }


    cout << maxi<< endl;
    }

    return 0;
}
