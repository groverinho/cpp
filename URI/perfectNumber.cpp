#include <iostream>

using namespace std;

int main()
{
     int casos ;
cin>> casos;
        for(int i = 0; i < casos; i++)
        {
            int n ;
            cin>> n;
            int sum = 0;

            for(int j = 1; j < n; j++)
            {
                if(n % j == 0)
                {
                    sum += j;
                }
            }
            if(sum == n)
                cout<<n << " eh perfeito" << endl;
            else
           cout<<n << " nao eh perfeito" << endl;
        }

    return 0;
}
