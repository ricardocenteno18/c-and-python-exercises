#include<stdio.h>
#include<math.h>

int main(){
	int a;
	
	printf("Escriba un numero: "); 
	scanf("%i", &a); // Esto se usara para guardar el valor que el usuario nos dara
	
	if(a%2==0){ // Se comprueba que si la division es par, si el residuo es 0 es par, si es 1 es impar
		printf("El numero %i es un numero par\n", a); // Se imprime en caso de que su residuo sea 0
	}
	else{ // Si en dado caso la primera condicion no se cumple se pasara a esta condicion, que su residuo seria 1
		printf("El numero %i es un numero impar\n", a); 
	}
	
	return 0;
}
