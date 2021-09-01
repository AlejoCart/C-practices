#include<stdio.h>

int funpot();

int main(){
	
	int num,pot;
	
	printf("Numero ingresar\n");
	scanf("%i",&num);
	printf("potencia\n");
	scanf("%i",&pot);
	
	printf("Resultado: %i",funpot(num,pot));
	
	
	return 0;
}
int funpot(int a, int po){
	
    int resultado=a;
    int i;
	
	for(i;i<po;i++){
		resultado*=a;
	}
	
	return resultado;
}
