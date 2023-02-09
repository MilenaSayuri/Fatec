n1 = int(input('Digite um valor:'))
n2 = int(input('Outro valor: '))
s = n1 + n2
m = n1 * n2
d = n1 / n2
di = n1 // n2
e = n1 ** n2

print('A soma eh {}, \no produto eh {} e \na divisao eh {:.3f}'.format(s, m, d))
print('Divisao inteira {} e \npotencia {}'.format(di, e))