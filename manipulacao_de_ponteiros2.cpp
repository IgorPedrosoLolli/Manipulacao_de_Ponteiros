#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 10;
	int *p1, *p2;
	p1 = &x;
	p2 = p1;
	
	printf("O endereco de p2 e: %p\n\n", p2);
	printf("O conteudo do endereco apontado pelo ponteiro p1 e: %d\n", *p1);
	printf("O conteudo do endereco apontado pelo ponteiro p2 e: %d\n", *p2);
	
	system ("pause");
	
	return 0;
}
