import numpy as np 
from numpy import random

M = 3
N = 2

matrix_aux = np.zeros((M,N))
matrix_aux2 = np.zeros((N,M))


for i in range(0,M):
    for j in range(0,N):
        matrix_aux[i,j] = random.randint(100)
        
print(matrix_aux)


for j in range(0,N):
    for i in range(0,M):
        matrix_aux2[j,i] = matrix_aux[i,N -(j+1)]
        
print(matrix_aux2)
        
