#include <stdio.h>
#include <stdlib.h>

int qinicial = 0 ;
int qfinal = 0 ;

int askvi() {
	printf("População inicial: ");
	scanf("%i", &qinicial);
	if (qinicial < 10) {
		askvi();
		return 0 ;
	}
	return 0 ;
}

int askfin() {
	printf("População final: ");
	scanf("%i", &qfinal);
	if (qfinal < qinicial) {
		askfin();
		return 0 ;
	}
	return 0 ;
}

int main(void){
	askvi();
	askfin();
	int quant = qinicial ;
	int ano = 0 ;
	while (!(quant >= qfinal)) {
		ano += 1 ;
		quant += quant/3 - quant/4 ;
	}
	if (quant >= qfinal) {
		printf("Anos: %i, População: %i\n", ano, quant);
	}
}
