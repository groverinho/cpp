#include <iostream>
 
using namespace std;
 
int main()
{
       int n;
    cin>> n;
    while(n!=0)
    {
        string key[n];
        string value[n];
        for(int i =0; i< n;i++)
        {
            cin>>key[i];
            cin>>value[i];
        }
        int m ;
        cin>> m;
        string key2[m];
        string value2[m];
         for(int i =0; i< m;i++)
        {
            cin>>key2[i];
            cin>>value2[i];
        }
        int c=0;
         for(int i =0; i< n;i++)
         {
           for(int j =0; j< m;j++)
             {
                 if( key[i]==key2[j])
                 {
                 //    cout<< key[i]<< endl;
                  int contaux=0;
                     if(value[i]!=value2[j])
                     {
                         string aux1 = value[i]; string aux2 = value2[j];
                        // cout<< aux1<<endl;
                         for(int ii=0; ii<aux1.size();ii++)
                         {
 
                                    if(aux1[ii]!=aux2[ii])
                                    {
                                           // cout<< aux1[ii]<< " ";
                                        contaux++;
                                    }
                             }
                         }
                    //cout<< value[i]<< endl;
                        if(contaux>1)
                            c++;
                     }
                     // goto stop;
                 }
             }
             cout <<c<< endl;
        cin>> n;
         }
    return 0;
    }
