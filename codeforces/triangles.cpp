#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,a[4];
	for(i=0;i<4;i++)
	cin>>a[i];
	sort(a,a+4);
	if((a[0]+a[1]>a[2])||(a[1]+a[2]>a[3]))
	{
		cout<<"TRIANGLE";
	}
	else if((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3]))
	{
		cout<<"SEGMENT";
	}
	else
	cout<<"IMPOSSIBLE";
	return 0;
}
