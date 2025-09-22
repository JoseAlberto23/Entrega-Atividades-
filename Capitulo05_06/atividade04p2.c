#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
} Livro;

int main() {
    setlocale(LC_ALL, "Portuguese");  /

    Livro livro1;

    strcpy(livro1.titulo, "Dom Casmurro");
    strcpy(livro1.autor, "Machado de Assis");
    livro1.anoPublicacao = 1899;

    printf("Livro: %s, Autor: %s, Ano: %d\n", 
           livro1.titulo, livro1.autor, livro1.anoPublicacao);

    return 0;
}

