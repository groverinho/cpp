#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int pares=0, impares=0;
    for(int i =0; i<n;i++)
    {
        int n2;
        cin>>n2;

        if(n2%2==0)
            pares++;
            else
                impares++;
    }
    cout <<pares << " " <<impares<< endl;
    return 0;
}
