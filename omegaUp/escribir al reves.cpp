#include <iostream>

using namespace std;

int main()
{
    string cadena ;
    cin>> cadena;
    for(int i =cadena.length()-1; i>=0;i--)
    cout << cadena[i];
    return 0;
}
