#include<stdio.h>

int main (){
	
	int practicas;
	int teorica;
	int participacion;
	double final;
	
	printf("Ingrese las notas \n");
	
	scanf("%d", &practicas);
	scanf("%d", &teorica);
	scanf("%d", &participacion);
	
	final=((practicas*30)+(teorica*60)+(participacion*10))/100;
	
	printf("%f", final);
	
	return 0;
}
