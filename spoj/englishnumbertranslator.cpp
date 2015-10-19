
#include<iostream>
#include<string>
#include<sstream>


using namespace std;
int main()
{
    string cad,s;

    string palabra[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    int numero[] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90 };
    while(getline(cin,cad))
    {
        istringstream ss(cad);
        long long millon=0,mil=0,acu=0;
        while(ss>>s)
        {
            for(int i=0;i<28;i++)
                if(s==palabra[i])
                {
                    acu+=numero[i];
                    break;
                }
                else if(s=="negative")
                {
                    cout<<"-";
                    break;
                }
                else if(s=="million")
                {
                    millon=acu*1000000;
                    acu=0;
                    break;
                }
                else if(s=="thousand")
                {
                    mil=acu*1000;
                    acu=0;
                    break;
                }
                else if(s=="hundred")
                {
                    acu=acu*100;
                    break;
                }
        }
        cout<<millon+mil+acu<<endl;
    }
return 0;
}
