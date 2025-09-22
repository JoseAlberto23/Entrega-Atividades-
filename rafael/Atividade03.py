def processar_lista(numeros):
    for num in numeros:
        if num == 0:
            print("Número 0 encontrado. Interrompendo...")
            break
        if num < 0:
            continue
        if num % 2 == 0:
            return num * 2
    return None

# Exemplo de uso:
lista = [3, -5, -2, 7, 8, 0, 9]
resultado = processar_lista(lista)
print("Resultado:", resultado)

#Com goto, precisaríamos usar rótulos e saltos, o que deixaria o programa confuso e difícil de manter.

#A abordagem moderna (com break, continue e return) é mais legível, clara e estruturada, evitando saltos arbitrários no código.