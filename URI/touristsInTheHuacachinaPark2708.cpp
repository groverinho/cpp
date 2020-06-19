#include <iostream>

using namespace std;

int main()
{
    string str;
    int tourists;
    int amountTourists=0;
    int amountJeeps=0;

    while(cin>>str&&str[0]!='A')
	{
	    cin>> tourists;
	    if(str[0]=='S'){
            amountTourists+=tourists;
            amountJeeps++;
	    } else {
            amountTourists-=tourists;
            amountJeeps--;
	    }

	}
    cout << amountTourists << endl;
    cout << amountJeeps << endl;
    return 0;
}
