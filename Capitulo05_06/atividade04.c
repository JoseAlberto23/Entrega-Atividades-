#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");  

    int numeros[5] = {10, 20, 30, 40, 50};

    printf("Array de inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

