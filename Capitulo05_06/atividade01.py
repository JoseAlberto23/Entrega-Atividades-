# Variável global
x = 10

def f():
    print("Dentro de f(): x =", x)

def g():
    x = 20  # Variável local em g()
    f()     # Chama f()

g()
