'''
Faça um algoritmo que leai o salário de um funcionário e mostre seu novo salário, com 15% de aumento
'''
salario = float(input('Digite o salario do funcionario:\n'))
aumento = salario * 0.15
resultado = salario + aumento
print('Esse funcionário teve um aumento de 15%,seu salário atual é de {}'.format(resultado))