#include <stdio.h>
#include <locale.h>



void dobrarValor(int x) {
    x = x * 2;
    printf("Dentro da fun��o (por valor): %d\n", x);
}


void dobrarReferencia(int *x) {
    *x = *x * 2;
    printf("Dentro da fun��o (por refer�ncia): %d\n", *x);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero = 10;

    printf("Valor inicial: %d\n", numero);

    dobrarValor(numero);
    printf("Ap�s dobrar por valor: %d\n", numero);


    dobrarReferencia(&numero);
    printf("Ap�s dobrar por refer�ncia: %d\n", numero);

    return 0;
}

