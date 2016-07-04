#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//void factores(long n);
void factores(long n)
{
	bool bandera = true;
	while (n%2==0)
	{
		if (bandera)
		{
			printf("2");
			bandera = false;
		}
		else
			printf(" x 2");
		n /= 2;
	}
	long i = 3;
	long aux = (sqrt(n))+1;
	while (i <= aux)
	{
		if ((n%i)==0)
		{
			if (bandera)
			{
				printf("%ld", i);
				bandera = false;
			}
			else
				printf(" x %ld", i);
			n /= i;
		}
		else
			i += 2;
	}
	if (n>1)
	{
		if(bandera)
			printf("%ld", n);
		else
			printf(" x %ld", n);
	}
}

int main(int argc, char **argv)
{
	long n;
	while (true)
	{
		scanf("%ld", &n);
		if (n==0)
			break;
		printf("%ld = ", n);
		if (n<0)
		{
			printf("-1 x ");
			n = abs(n);
		}
		factores(n);
		printf("\n");
	}
	return 0;
}

