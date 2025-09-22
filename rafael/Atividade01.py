#i := 1
#goto check

#loop:
  #  print(i)
 #   i := i + 1

#check:
    #if (i <= 10) then
      #  goto loop

#utilizando o while
i = 1
while i <= 10:
    print(i)
    i += 1

#Utilizando o for
for i in range(1, 11):
    print(i)

#Comparacao entre os tipos
#O código com goto é confuso e pouco legível, pois exige acompanhar saltos de execução.
#O while é mais claro, pois deixa explícita a condição de parada.
#O for é o mais legível neste caso, já que expressa diretamente o intervalo de valores.

