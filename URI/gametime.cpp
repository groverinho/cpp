#include <cstdio>

int main(int argc, char **argv){

	int inicio,fin;
	scanf("%d%d",&inicio,&fin);

	if (fin <= inicio) printf("O JOGO DUROU %d HORA(S)\n",24 - inicio + fin);
	else printf("O JOGO DUROU %d HORA(S)\n",fin-inicio);	


	return 0;
}
