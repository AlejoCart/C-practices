#include<stdio.h>

void menu(int a){
	
	int opcion;
	printf("Bienvenido ingrese una opcion: ");
	scanf("%i",&opcion);
	
	switch (a){
		
		case 0:
			printf("Tenga un buen dia");
			break;
		case 1:
			printf("operacion 1\n");
			break;
		case 2:
			printf("operacion 2\n");
			break;
		case 3:
			printf("operacion 3\n");
			break;
		default:
			printf("numero incorrecto\n");
			break;
	}
}

int main (){
	
	int opcion;
	
	do{
		printf("Bienvenido ingrese una opcion: ");
		scanf("%i",&opcion);
		menu(opcion);
		
	}while(opcion>0);
	
	
	return 0;
}
