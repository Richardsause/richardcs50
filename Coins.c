#include <stdio.h>
#include <stdlib.h>

int done = 0 ;
const double valor = 75.10 * 100 ;
double valormod = 0 ;

double duz = 200.00 ;
double cen = 100.00 ;
double cin = 50.00 ;
double vin = 20.00 ;
double dez = 10.00 ;
double cnq = 5.00 ;
double ds = 2.00 ;
double um = 1.00 ;
double cq = 0.50 ;
double vc = 0.25 ;
double de = 0.10 ;
double cn = 0.05 ;

int try(float valor) {
	int quantid = 0 ;
	while (valormod - valor > 0) {
		quantid += 1 ;
		valormod -= valor ;
	}
	if (valormod - valor < cn && !(quantid == 0)) {
		printf("%f %i \n", valor, quantid) ;
	}
}

int main (void) {
	printf("valor inicial - %f \n", valor) ;
	valormod = valor ;
	while ( valormod - cn > 0 && done == 0 ) {
		try(duz) ;
		try(cen) ;
		try(cin) ;
		try(vin) ;
		try(dez) ;
		try(cnq) ;
		try(ds) ;
		try(um) ;
		try(cq) ;
		try(vc) ;
		try(de) ;
		try(cn) ;
	}
	if (!(valormod - cn > cn)) {
		done = 1 ;
		printf("sobrando %f \n ", valormod) ;
	}
}
