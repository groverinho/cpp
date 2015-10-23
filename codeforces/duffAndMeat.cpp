#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int n, x = 100, c, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> c;
        if (c < x)
            x = c;
        sum += x*m;
    }
    cout << sum<< endl;
    return 0;
}
