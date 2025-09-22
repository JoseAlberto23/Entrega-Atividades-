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
        printf("1 - Calcular o quadrado de um número\n");
        printf("2 - Calcular o fatorial de um número\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &num);
                printf("O quadrado de %d é %d\n", num, num * num);
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d", &num);
                printf("O fatorial de %d é %d\n", num, fatorial(num));
                break;
            case 3:
                printf("Saindo do programa...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}

