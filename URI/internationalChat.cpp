#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>> casos;
    while(casos--)
    {
        int n ;
        cin>> n;
        n--;
        string idioma;
        cin>>idioma;
        bool bandera = true;
        while(n--)
        {
            string idioma2;
            cin>>idioma2;
            if(idioma != idioma2)
            {
                bandera = false;
            }
        }
        if(bandera)
            cout << idioma << endl;
        else
            cout << "ingles"<< endl;
    }

    return 0;
}
