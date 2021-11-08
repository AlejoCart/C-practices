#include<stdio.h>

int main(){
	
	int numero;
	int suma=0;
	int i=1;
	
	printf("Ya sabes que hacer, un numero, el que quieras: ");
	scanf("%i",&numero);
	
	while(i<=numero){ //si se quiere excluir el numero limite quitar el "=".
		
		if(i%2!=0) suma+=i;
		i++;
	}
	printf("Ta da, fin, lo esperado, veamos esos numeros: %i",suma);
	
   return 0;
}
