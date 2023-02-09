'''
Escreva um programa que pergunte a quantidade de KM percorridos por um carro alugado e a quantidaade de dias p[elos quais ele foi alugado. Calcule o preco a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por KM rodado
'''
km = float(input('Quantos Km voce andou com o carro alugado?\n'))
d = int(input('E quantos dias voce utilizou o carro alugado?\n'))
pago = (d * 60) + (km * 0.15)
print('O total a pagar é de R${:.2f}'.format(pago))

