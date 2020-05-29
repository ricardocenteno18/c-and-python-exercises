#include <stdio.h>
int main(){


int num;
printf("Escribe un numero: ");
scanf("%d",&num);
if(num % 2 == 0) // Para poder identificar, se condiciona con la division, si en dado caso es 0, se vuelve even, de caso contrario seria odd
        printf("%d es even.", num);
    else
        printf("%d es odd.", num);
    
    return 0;
}
