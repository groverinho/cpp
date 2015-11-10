#include <iostream>

using namespace std;

int main()
{
    string linea;
    while(getline(cin,linea))
    {
        string cad="";
           for(int i = 0; i < linea.length(); i++)
        {

                char c = linea[i];

                if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
                {
                    c += 13;
                }
                else if(c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
                {
                    c -= 13;
                }

                cad+=c;

            }
        cout << cad << endl;
    }

    return 0;
}
