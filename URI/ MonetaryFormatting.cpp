#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string entero;

    int decimal;

    while(cin>>entero>>decimal)
    {
         string entero2;
    stringstream  decimal2;
    decimal2 << decimal;
    for(int i =entero.size()-1; i>=0; i-- )
    {
        entero2+=entero[i];
    }
    string de="";
    if(decimal>0 && decimal<=9)

        de= ".0"+decimal2.str();
    else if(decimal==0)
         de= ".00";
    else
            de= "."+decimal2.str();

    string finalEntero="";
    for(int i =0; i<entero2.size(); i++)
    {
        if((i+1)%3 ==0 && i != entero2.size()-1)
          finalEntero= finalEntero+entero2[i]+"," ;
          else
            finalEntero= finalEntero+entero2[i] ;
    }
     entero="";
    for(int i =finalEntero.size()-1; i>=0; i-- )
    {
        entero+=finalEntero[i];
    }

    cout << "$"<<entero<<de<< endl;
    }

    return 0;
}
