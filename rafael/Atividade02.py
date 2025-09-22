def fatorial(n):
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i
    return resultado


while True:
    print("\n--- MENU ---")
    print("1 - Calcular o quadrado de um número")
    print("2 - Calcular o fatorial de um número")
    print("3 - Sair")

    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:
        num = int(input("Digite um número: "))
        print(f"O quadrado de {num} é {num ** 2}")
    elif opcao == 2:
        num = int(input("Digite um número: "))
        print(f"O fatorial de {num} é {fatorial(num)}")
    elif opcao == 3:
        print("Saindo do programa...")
        break
    else:
        print("Opção inválida! Tente novamente.")

#Comparacao
# Em Python, o menu é mais simples e compacto, pois não precisamos do switch/case.
# Em C, o switch deixa claro os casos, mas exige mais código (declaração de funções, break etc.).
# Conclusão: Python é mais legível e rápido de implementar.