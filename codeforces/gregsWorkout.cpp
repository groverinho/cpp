#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int pecho;
    int bicep;
    int espalda;
    int cuerpo;
    int c1=1;
    int total1=0, total2=0,total3=0;
    for(int i =0; i<n;i++)
    {
        if(c1==1)
        {
            cin>>cuerpo;
            total1+= cuerpo;
            c1++;
        }
        else   if(c1==2)
        {
            cin>>cuerpo;
            total2+= cuerpo;c1++;
        }
        else   if(c1==3)
        {
            cin>>cuerpo;
            total3+= cuerpo;
            c1=1;
        }
    }
    if(total1>total2 && total1 > total3)
    {
         cout << "chest" << endl;
    }
    else if(total2>total1 && total2 > total3)
    {
         cout << "biceps" << endl;
    }
    else
    {
         cout << "back" << endl;
    }

    return 0;
}
