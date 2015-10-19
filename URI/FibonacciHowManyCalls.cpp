
 #include <stdio.h>
using namespace std;

int total = 0;

long long Fib (long long n){
    total++;
    if(n==1)
        return 1;
    if (n==0)
        return 0;
    return Fib(n-1)+Fib(n-2);
}



int main (){

    long long a;
    int b;
    scanf("%d", &b);

    while (b--){
            scanf("%d", &a);
        total = 0;
        printf("fib(%d) = %u calls = %u\n",a,(total-1),Fib(a));
        //cout <<"fib("<<a<<") = "<<total-1<<" calls = "<<Fib(a)<<endl;
    }
    return 0;
}
