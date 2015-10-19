#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
        int n ;
       cin >> n;

  cin.get();
        string cadena;
        int tamano;
   string encriptacion;

        while(n--)
        {
         //strlen()
            getline(cin, cadena);
            tamano = cadena.size();
            char c = 0;
            for(int j = tamano - 1; j >= 0; j--)
            {
                 c = cadena[j];
                if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
                    c += 3;
                if(j <= ceil(tamano/2.0) - 1)
                    c -= 1;
                encriptacion+= c;
            }

            cout << encriptacion << endl;
             encriptacion= "";
        }
    return 0;
}
