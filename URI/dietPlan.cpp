#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> dieta;
    set<char>::iterator i;
    char comida;
    int casos;
    cin>> casos;
      getchar();
    while (casos--)
    {
        dieta.clear();
        while ((comida = getchar()) != '\n')
            dieta.insert(comida);
        bool trampa = false;
        while ((comida = getchar()) != '\n')
            if (!dieta.erase(comida))
                trampa = true;
        while ((comida = getchar()) != '\n')
            if (!dieta.erase(comida))
                trampa = true;
        if (!trampa)
        {
            for (i = dieta.begin(); i != dieta.end(); i++)
                cout<<(*i);
            cout <<endl;
        }
        else
             cout <<"CHEATER"<<endl;
    }
    return 0;
}
