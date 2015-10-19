#include <iostream>
#include <cstring>

using namespace std;

const int aux = 'a' - 'A';

char minuscula (char c) {
  if (c >= 'a')
    return c;
  else
    return c + aux;
}

char mayuscula (char c) {
  if (c <= 'Z')
    return c;
  else
    return c - aux;
}

int main () {
  char cad[100];

  while (cin.getline(cad, 50))
  {
    bool bandera = true;
    int n = strlen(cad);
    for (int i = 0; i < n; i++)
    {
      if (cad[i] != ' ')
      {
        if (bandera)
          cad[i] = mayuscula(cad[i]);
        else
          cad[i] = minuscula(cad[i]);
        bandera = !bandera;
      }
    }
    cout << cad << endl;
  }

  return 0;
}
