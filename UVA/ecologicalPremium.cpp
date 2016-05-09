#include <iostream>

using namespace std;

int main()
{
   int n ;
   cin>> n;

            for (int i = 1; i <= n; ++i)
            {
                int sum = 0;
                int f;
                cin >>f;
                for (int j = 1; j <= f; ++j)
                {
                    int tam , animal, c;
                    cin>>tam>>animal>>c;
                    sum += tam * c;
                }
                    cout << sum << endl;
            }

    return 0;
}
