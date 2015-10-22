#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    string cadAux = "";
    for(int i = 0; i<n;i++)
    {
        string cad;
        cin>>cad;
        cadAux+=cad;
    }
    int v=1;
    for (int i = 0; i < cadAux.length() - 1; i++)
    {
			if (cadAux[i] == cadAux[i + 1])
				v++;
    }
    cout << v << endl;
    return 0;
}
