'''
o mesmo professor do desafio anterior quer sortear a ordem de apresentacao de trabalhos dos alunos. Faca um prgrama que leia o nome dos quatro alunos e mostre a ordem sorteada
'''
import random
a1 = str(input('Digite o nome do primeiro aluno:\n'))
a2 = str(input('Digite o nome do segundo aluno:\n'))
a3 = str(input('Digite o nome do terceiro aluno:\n'))
a4 = str(input('Digite o nome do quarto aluno:\n'))
lista = [a1, a2, a3, a4]
random.shuffle(lista)
print('A ordem dos alunos que apresentarão será {}'.format(lista))