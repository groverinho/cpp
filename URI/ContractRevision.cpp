#include <iostream>
using namespace std;
int main()
{
    char d;
    string n;
    while (cin >> d >> n && d != '0')
    {
        bool bandera = false, cero = false;
        for (int i = 0; i < (int)n.length(); i++)
        {
            if (n.at(i) != d)
            {
                if (n.at(i) != '0' && n.at(i) != d)
                    cero = true;
                if (i == (int)n.length() - 1 && n.at(i) == '0')
                    cero = true;
                if (n.at(i) != '0')
                {
                    cout << n.at(i);
                    bandera = true;
                }
                else
                {
                    if (cero)
                    {
                        cout << "0";
                        bandera = true;
                    }
                }
            }
        }
        if (!bandera)
            cout << "0";
        cout << endl;
    }
    return 0;
}
