#include <stdio.h>
#include <stdlib.h>

int alvo = 0 ;

int askva(){
	printf("Valor solicitado: ");
	scanf("%i", &alvo);
	if ( alvo < 0 ) {
		askva();
	}
	alvo += 1 ;
	return 0;
}

int main (void) {
	askva();
	int altura = 0 ;
	int fileira = 0 ;
	while (fileira < alvo) {
		while (altura < alvo) {
			int tempf = 0 ;
			while (tempf < fileira) {
				printf("#") ;
				tempf += 1 ;
			}
			printf("\n") ;
			altura += 1 ;
			fileira += 1 ;
		}
	}
}
