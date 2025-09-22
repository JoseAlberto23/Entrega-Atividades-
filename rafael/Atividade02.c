#include <stdio.h>
#include <locale.h>


int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao, num;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1 - Calcular o quadrado de um n�mero\n");
        printf("2 - Calcular o fatorial de um n�mero\n");
        printf("3 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um n�mero: ");
                scanf("%d", &num);
                printf("O quadrado de %d � %d\n", num, num * num);
                break;
            case 2:
                printf("Digite um n�mero: ");
                scanf("%d", &num);
                printf("O fatorial de %d � %d\n", num, fatorial(num));
                break;
            case 3:
                printf("Saindo do programa...\n");
                return 0;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    }

    return 0;
}

