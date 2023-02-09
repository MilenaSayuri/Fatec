'''
Um professor quer sortear um dos seus aquatro alunos para apagar o quadro. Faca um programa que ajudde ele, lendo o nome deles e escrevendo o nome do escolhido
'''
import random
a1 = str(input('Digite o nome do primeiro aluno:\n'))
a2 = str(input('Digite o nome do segundo aluno:\n'))
a3 = str(input('Digite o nome do terceiro aluno:\n'))
a4 = str(input('Digite o nome do quarto aluno:\n'))
lista = [a1, a2, a3, a4]
escolhido = random.choice(lista)
print ('O aluno que apagará o quadro é {}'.format(escolhido))