matrixy = [[12,7,3],
        [4 ,5,6],
        [7 ,8,9]]
matrixz = [[5,8,1],
        [6,7,3],
        [4,5,9]]

res = [[0 for y in range(3)] for z in range(3)] #In this code we have two matrices, one "y" and one "z" which are 3x3,
# then we have a function in which we use 3 "for's" one for the matrix "and" another for the matrix "z" and another for the final matrix,
# these "for" pass through the elements of the matrices, to be able to do the multiplication of the matrices in this way
for i in range(len(matrixy)):
    for j in range(len(matrixz[0])):
        for k in range(len(matrixz)):
            res[i][j] += matrixy[i][k] * matrixz[k][j]
print("El resultado de la matriz es: ")
print (res)