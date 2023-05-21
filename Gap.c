#include <stdio.h>
#include <stdlib.h>

int hashtag (int carro) {
	int mr = 0 ;
	while ( !(carro == mr ) ) {
		printf("#") ;
		mr += 1 ;
	}
	if ( carro == mr ) {
		return 0 ;
	}
}

int espaco (int carro) {
	int mr = 0 ;
	while ( !(carro == mr ) ) {
		printf(" ") ;
		mr += 1 ;
	}
}

int main (void) {
	int entrada = 5 ;
	int x = entrada ;
	int y = 0 ;
	while ( !(x == 0)  && !(y == entrada)) {
		x -= 1 ;
		y += 1 ;
		espaco(x) ;
		hashtag(y) ;
		printf(" ") ;
		hashtag(y) ;
		espaco(x) ;
		printf("\n") ;
	}
}
