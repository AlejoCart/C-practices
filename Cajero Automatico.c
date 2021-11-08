// Simulación básica cajero automático

#include<stdio.h>
#include<conio.h>

int main(){
	int opcion;
	float saldo=10000, deposito, extraccion;
	
	printf("Cajero Automatico\n");
	printf("------ ----------\n");
	printf("1.- Ver Saldo\n");
	printf("2.- Hacer un deposito\n");
	printf("3.- Hacer una extraccion\n\n");
	printf("Ingrese opcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1:
			printf("Su saldo es de $ %f", saldo);
			break;
		case 2:
			printf("Ingrese cantidad a depositar: ");
			scanf("%f", &deposito);
			saldo+=deposito;	//saldo = saldo + deposito;
			printf("Su nuevo saldo es: $ %f", saldo);
			break;
		case 3:
			printf("Ingrese cantidad a extraer: ");
			scanf("%f", &extraccion);
			if(extraccion > saldo){
				printf("No tiene fondos suficientes");
			}
			else{
				saldo-=extraccion; //saldo = saldo - extraccion;
				printf("Su nuevo saldo es: $ %f", saldo);
			}
			break;
		default:
			printf("Opcion Incorrecta.");	
	}
	getch();
	return 0;
	
}
