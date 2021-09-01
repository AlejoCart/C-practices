#include <stdio.h>
//suma creciente y total... --_(u-u)_--
void main (){
	
	int numero,i;
	int suma=0;
	
	printf("Ingresar un numero por favor: ");
	scanf("%i",&numero);
	for(i=1;i<=numero;i++){
		
		suma+=i;
	}
	printf("Suma, total, resultado es igual a = %i",suma);
	
	
}
