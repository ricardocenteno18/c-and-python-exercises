import math
n=int(input("Ingresa un numero: ")) #In this code we have just one variable that is "sum1". Now, in the for we applied the function of sum1+(1/math.factorial)) to get the euler operation
sum1=1
for i in range(1,n+1): "Hace euler"
sum1=sum1+(1/math.factorial(i))
print("La suma de la serie es: ",round(sum1,2))