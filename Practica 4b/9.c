#include<stdio.h>

void main(){
	
	int i,numero;
	int total=1;
	
	printf("Numero rapido!: ");
	scanf("%i",&numero);
	for(i=1;i<=numero;i++){
		
		total*=i;
		
	}
	
	printf("No te olvides el recibo: %i",total);
	
}
