import re
print("Escriba una frase: ")
ini_string = input("") #Se guarda la frase que el usuario va a ingresar
print("Su frase : ", ini_string)
result = re.sub('[\W_]+', '', ini_string) #Se condiciona a la frase, para que elimine los caracteres
print("Su frase convertida: ", result) #Se imprime la frase sin los simbolos