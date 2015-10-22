#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string piedras;
  cin >> piedras;

  int quitar = 0;
  for (int i=1; i<piedras.size(); i++)
  {
    if (piedras[i] == piedras[i-1])
      quitar++;
  }

  cout << quitar << endl;

  return 0;
}
