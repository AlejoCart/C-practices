#include<stdio.h>

typedef struct mueble{
	
	char* nombre;
	char* marca;
	char* tipoMadera;
	int pesoKg;
	int edad;
	
}mueble;

void printStr(struct mueble ejMueble){
	
	printf("%s, %s, %s, %d, %d", ejMueble.nombre,ejMueble.marca,ejMueble.tipoMadera,
	ejMueble.pesoKg,ejMueble.edad);
}

void main(){
	
	mueble mueble1= {"nombre1","MaderitasBonitas","Caoba",24,2};
	printStr(mueble1);
	
	
}
