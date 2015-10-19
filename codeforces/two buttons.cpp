#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;

	while(cin >> n)
	{
		cin >> s;
		set <char> sett;

		for(int i = 0; i < n; i++)
		{
			sett.insert(tolower(s[i]));
		}
		if(sett.size() == 26)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
