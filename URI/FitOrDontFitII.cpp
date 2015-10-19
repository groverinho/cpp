#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
   cin>> n;


    while(n--)
    {
        string a;
        string b;
       cin>>a>>b;
//        scanf("%d", &n1);
//        scanf("%d", &n2);
        if (a.length()>=b.length())
            {
                if (b == (a.substr(a.length()- b.length(),a.length())))
                {
                      cout << "encaixa" << endl;
                }
                else
                {
                     cout << "nao encaixa" << endl;
                }
            }
            else
                  cout << "nao encaixa" << endl;


    }

    return 0;
}
