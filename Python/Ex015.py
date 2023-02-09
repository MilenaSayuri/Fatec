'''
Faça um algoritmo que leia o preço  de um produto e mostre seu novo preço, com 5% de desconto
'''
produto = float(input('Qual o preço desse produto?\n'))
desconto = produto * 0.05
resultado = produto - desconto
print('Esse produto tem 5% de desconto, seu novo preço é de {}'.format(resultado))