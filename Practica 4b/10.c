#include<stdio.h>
//sumar los impáres, restar los pares... PORQUE SI
int main(){
	
	int i,numero;
	int total=0;
	
	printf("adivina que.. NUMERO!\n");
	scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		
		if(i%2==0) {total-=i;
		//printf("%i",total);} testing
		else total+=i;
		//printf("%i",total); testing
		
	}
	printf("Here are the resaults: %i",total);
	
	
	return 0;
}
