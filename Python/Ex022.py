'''
Faca um porgrama que leia um angulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse angulo
'''

import math
an = float(input('De um aangulo qualquer:\n'))
seno = math.sin(math.radians(an))
print('O angulo de {} tem o SENO de {:.2f}'.format(an, seno))
cosseno = math.cos(math.radians(an))
print('O angulo de {} tem o COSSENO de {:.2f}'.format(an, cosseno))
tan = math.tan(math.radians(an))
print('O angulo de {} tem a TANGENTE de {:.2f}'.format(an, tan))