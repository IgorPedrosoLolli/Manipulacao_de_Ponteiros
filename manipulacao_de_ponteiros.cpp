#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, valor;
	int *p;
	num = 10;
	p = &num;
	valor = *p;
	
	printf("O conteudo do endereco apontado por P e: %d\n", *p);
	printf("O endereco do endereco para onde o ponteiro P aponta e: %p\n", p);
	printf("O conteudo do valor e: %d\n\n", valor);
	system ("pause");
	
	return 0;
}
