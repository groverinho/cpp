#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    string cadena ;
    cin>>cadena;
    string aux_cadena(cadena.begin(), cadena.end());
    reverse(aux_cadena.begin(), aux_cadena.end());
    cout<<aux_cadena<<endl;
    return 0;
}
