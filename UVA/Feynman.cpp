#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(true)
    {
        if(n==0)
            break;
        if(n == 1)
               cout <<1 << endl;
        else
                cout << ((n)*(n+1)*(n * 2 + 1))/6 << endl;
            cin>>n;
    }

    return 0;
}
