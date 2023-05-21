#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valorinicial = 0;
int valor = 0;

void trocar(int cent) {
    int coins = 0;
    while (valor >= cent) {
        valor -= cent;
        coins += 1;
    }
    if (valor - cent <= cent && !(coins == 0)) {
        if (cent >= 100) {
            printf("Moeda: %i real Quantidade: %i\n", cent / 100, coins);
        }
        else {
            printf("Moeda: %i centavos Quantidade: %i\n", cent, coins);
        }
    }
}

int askva() {
    float valorfloat = 0;
    printf("Valor: ");
    scanf("%f", &valorfloat);
    if (valorfloat <= 0) {
        askva();
    }
    valorinicial = (int)(valorfloat * 100);
    valor = valorinicial;
    return 0;
}

int main(void) {
    askva();
    trocar(100);
    trocar(50);
    trocar(25);
    trocar(10);
    trocar(5);
    printf("Valor restante: %i centavos\n", valor );
    return 0;
}
