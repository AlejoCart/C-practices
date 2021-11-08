#include <stdio.h>

int multiplicacion(int* multiplicador, int* multiplicando ){
	
	int suma;
	for(*multiplicador; *multiplicador >=1; *multiplicador=*multiplicador/2){
		if(!(*multiplicador %2 ==0)) suma= suma +*multiplicando;
		*multiplicando=*multiplicando*2;
	}
	return suma;
}

void main(){
	
	int multipicador, multipicando;
	
	printf("Bienvenido\n");
	
	do{
		
	printf("Ingrese el multiplicador");
	scanf("%i",&multipicador);
	printf("Ingrese el multiplicando");
	scanf("%i",&multipicando);
	
	if(multipicador<0 || multipicando<0)
	printf("El programa no soporta numeros negativos, por favor ingrese valores positivos\n");
	
	
   }while(multipicador<0 || multipicando<0);
	
	printf("El resultado de la multiplicacion es: %i \n",
	multiplicacion(&multipicador,&multipicando));
	
	printf("Hasta luego, tenga un buen dia");
	
}
