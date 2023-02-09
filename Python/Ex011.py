'''
Escreva um program que leia um valor em metros e o exiba convertido em centimetros e milimetros
'''
m = float(input('Digite um numero em metros:\n'))
ce = m * 100
mi = m * 1000
print('O numero digitado em centimetro eh {} e em milimetros eh {}'.format(ce, mi))