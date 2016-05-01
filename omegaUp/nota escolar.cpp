#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    switch(n)
    {

    case 6:
            cout << "Suficiente" << endl;
        break;
        case 7:
            cout << "Regular" << endl;
        break;
        case 8:
            cout << "Bien" << endl;
        break;
        case 9:
            cout << "Muy bien" << endl;
        break;
        case 10:
            cout << "Excelente" << endl;
        break;
        default:
                cout << "No acredita" << endl;
                break;
    }


    return 0;
}
