'''
Crie um programa que leia quanto dinheiro uma pessoa tem naa carteira e mostre quantos dolares elaa pode comprar
Considere: US$1.00 = R$5,08
'''
money = float(input('Quantos reais voce tem?\n'))
converter = money / 5.08
print('O dinheiro inserido poderá ser comprado em {:.2f} dólares'.format(converter))

