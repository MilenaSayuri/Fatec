'''
Faca um programa que leia o comprimento do cateto adjacente de um triangulo retangulo, calcule e mostre o compriemnto da hipotenusa
'''
from math import hypot
co = float(input('Comprimento do cateto oposto:\n'))
ca = float(input('Comprimento do cateto adjacente:\n'))
hi = hypot(co, ca)

print('A hipostenusa vai medir {:.2f}'.format(hi))