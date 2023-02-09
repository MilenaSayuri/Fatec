'''
Faça um programa que leia a largura e a altura de uma parede em metros, calcule a quantidade de tinta necessaria para pinta-la, sabendo que cada litro de tinta pinta uma area de 2m^2
'''
altura = int(input('Insera o valor em metros de altura da parede:\n'))
largura = int(input('Agora digite o valor em metros de largura da parede:\n'))
area = largura * altura
litro = 2
tinta = area / litro
print('A area é de {}m^2 e serão necessárias {} litros de tinta'.format(area, tinta))



