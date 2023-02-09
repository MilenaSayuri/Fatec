"""
PEP8 - Python Enhancement Proposaal
Sao propostas de melhorias para a linguagem Python
 The Zem of Python
import this
 A ideia da PEP8 é que possamos escrever códigos Python de forma Pythônica

[1] - Utilize Camel Case para nomes de classes;
class Calculadora:
    pass

class CalculadoraCientifica:
    pass

[2] - Utilize nomes em minúsculo, separados por underline por funções ou variáveis;
def soma():
    pass

def soma_dois():
    pass

numero = 4

 numero_par = 5

 [3] - Utilize 4 espaços para identação!;

if 'a' in 'banana':
    print('tem')

[4] - Linhas em branco;
- Separar funções e definições de classe com duas linhas em brancoç
- Métodos dentro de uma classe devem ser separados com um única linha em branco;

[5] - Imports
- Imports devem ser sempre feitos em linhas separadas;

# Errado:

import sys, os

# Certo:

import sys
import os

# Não há problemas em utilizar:

from types import StringType, ListType

# Caso tenha muito imports de um mesmo pacote, recomenda-se fazer:

from types import (
    StringType,
    ListType,
    SetType,
    OutroType

# Import devem ser colocados no topo do arquivo, logo depois de quaisquer comentários ou docstrings
# e antes de constantes ou váriaveis globais

[6] - Espaços em expressões e instruções:

# Não faça:
funcao( algo[ 1 ], { outro: 2 } )

dict [ ' chave ' ] = lista [indice]

# Faça:

funcao(algo[1], {outro: 2})

dict['chave'] = lista[indice]

#Não faça:

algo (1)

x                           = 1
y                           = 3
variavel_longa = 5

# Faça:

algo(1)

x = 1
y = 3
variavel_longa = 5

[7] - Termine sempre uma instrução com uma nova linha

"""

