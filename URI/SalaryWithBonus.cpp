#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // your code goes here
    double a, b;
    string c;
    cin>>c>>a>>b;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(b*15)/100<<endl;
    return 0;
}
