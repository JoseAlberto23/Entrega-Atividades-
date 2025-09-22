#include <stdio.h>
#include <locale.h>

void contador() {
    int a = 0;        
    static int b = 0; 

    a++;
    b++;

    printf("a = %d, b = %d\n", a, b);
}

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de variáveis automática e estática:\n");

    contador(); 
    contador(); 
    contador(); 

    return 0;
}

