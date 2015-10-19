#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int h1; int m1 ;int h2; int m2;

   while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4){

                  if(h1==0 && m1==0 && h2==0 && m2==0)
                        break;

                int total1 =0,total2=0,total=0;


                if(h1==0&&h2==0)
                    h1=0;
                else if(h2==0)
                    h2=24;
                else if(h1==0)
                    h1=24;
                    total1 = (h1*60)+m1;
                    total2 = (h2*60)+m2;
                    total = total2-total1;
                    if(total<0)
                    {
                        printf("%d\n",(1440+total));
                        //int aux = 1440 + total;
                        //cout<< aux<<endl;
                    }
                    else
                    {
                        printf("%d\n",total);
                        //cout<< total<<endl;
                    }

            }

    return 0;
}
