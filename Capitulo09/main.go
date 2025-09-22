package main

import (
    "fmt"
    "time"
)

func escrever(texto string) {
    for i := 0; i < 5; i++ {
        fmt.Println(texto, i)
        time.Sleep(time.Millisecond * 500)
    }
}

func main() {
    go escrever("Corrotina")   
    escrever("Função normal")  
}

/* O que acontece com a ordem das mensagens?
Elas aparecem intercaladas, mas a ordem exata pode variar a cada execução.

Por que isso acontece?
Porque a palavra-chave go cria uma goroutine, que roda de forma concorrente com a função principal. Assim, ambas compartilham a CPU e o escalonador do Go intercala sua execução.

Relação com a definição de corrotinas do Capítulo 9:
Corrotinas são subprogramas que permitem execução concorrente e cooperativa.
Diferente de uma função comum, uma corrotina não precisa terminar para que outra inicie — o controle de execução pode ser alternado entre elas, permitindo paralelismo lógico. */
