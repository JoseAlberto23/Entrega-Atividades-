#include <stdio.h>
#include <locale.h>



void dobrarValor(int x) {
    x = x * 2;
    printf("Dentro da função (por valor): %d\n", x);
}


void dobrarReferencia(int *x) {
    *x = *x * 2;
    printf("Dentro da função (por referência): %d\n", *x);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero = 10;

    printf("Valor inicial: %d\n", numero);

    dobrarValor(numero);
    printf("Após dobrar por valor: %d\n", numero);


    dobrarReferencia(&numero);
    printf("Após dobrar por referência: %d\n", numero);

    return 0;
}

