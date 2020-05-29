import re
a= input("Escribe una contrasena:  ")
b = True
while b:
    if (len(a)<6 or len(a)>16): #Marcamos el rango que debe contener la contrasena
        break
    elif not re.search("[a-z]",a): #Colocamos la condicion que debe cumplir la contrasena
        print('La contrasena necesita contener minusculas [a-z]')
        break
    elif not re.search("[0-9]",a): #Colocamos la condicion que debe cumplir la contrasena
        print('La contrasena debe contener numeros [0-9]')
        break
    elif not re.search("[A-Z]",a): #Colocamos la condicion que debe cumplir la contrasena
        print('La contrasena debe contener mayusculas [A-Z]')
        break
    elif not re.search("[.!#$;]",a): #Colocamos la condicion que debe cumplir la contrasena
        print('La contrasena debe contener simbolos como .!#$;')
        break
    elif re.search("\s",a):
        break
    else:
        print("La contrasena es valida!") #Se imprime en caso que todas las condiciones se cumplan
        b=False
        break
if b:
    print("La contrasena no es valida, intenta de nuevo.") #Se imprime en dado caso que no cumpla con una o con varias de las condiciones
