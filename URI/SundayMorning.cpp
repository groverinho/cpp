#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
 
int main()
{
    string horaString ;
    while(cin>>horaString)
    {
        string minutoString;
        minutoString = horaString.substr(horaString.length()-2,horaString.length());
        int minuto= atoi(minutoString.c_str());
        minutoString = horaString.substr(horaString.length()-2,horaString.length());
        horaString = horaString.substr(0,2);
        int hora= atoi(horaString.c_str());
      int      atraso = 0;
      if(hora >= 7){
         atraso = ((hora - 7) * 60) + minuto;
      }
      cout << "Atraso maximo: " << atraso << endl;
    
 
    }
 
    return 0;
}
