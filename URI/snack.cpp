#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  //  double a=5.54565465;
		int x ;
		scanf("%d",&x);
		double b;
		scanf("%lf",&b);
		switch (x)
		{
		case 1 :
		     printf("Total: R$ %.2f\n",(b*4));
			break;
		case 2:
			printf("Total: R$ %.2f\n",(b*4.5));
			break;

		case 3:
			printf("Total: R$ %.2f\n",(b*5));
			break;

		case 4:
			printf("Total: R$ %.2f\n",(b*2));
			break;

		case 5 :
			printf("Total: R$ %.2f\n",(b*1.5));
			break;

		default:
			break;
		}
    return 0;
}
