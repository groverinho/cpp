    #include <iostream>
    using namespace std;
    int main()
    {
        int hojas;
        int diasSemana[7];
        cin>> hojas;
        for(int i =0; i<7; i++)
            cin>> diasSemana[i];
        int dia=0;
        while(hojas>0)
        {
            hojas-=diasSemana[dia];
                if(hojas<=0)
                {
                       cout << (dia+1) << endl;
                              return 0;
                }
            if(dia==6 )
            {
                dia=0;
                continue;
            }
            dia++;
        }
    }
