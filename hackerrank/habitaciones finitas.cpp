#include <iostream>

using namespace std;

int main()
{
   int casos;
    cin>> casos;
    long a ,b;
    while(casos--){
    cin>>a>>b;
    long result = (a*b)+((b-1)*(a-1))+((b+1)*2)+((a-1)*2);
    cout << result << endl;


    }
    return 0;
}
