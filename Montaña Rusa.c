// Alejo Cartolano
// Alexander Cabrera
// Luis Ruiz
// Cosentino Luca 


#include<stdio.h>
#include<conio.h>

int main(){
	
	char nombre[30]; 
	int edad;
	double altura;
	
	printf ("Ingrese nombre: ");
	gets (nombre);
	
	printf ("Ingrese edad: ");
	scanf ("%d", &edad);				
	
	printf ("Ingrese altura: ");
	scanf ("%2d", &altura);			
	
	if (altura >= (1.40) && edad >= 7  ){
		printf ("%s puede pasar a la montaña rusa", nombre);
	}

	else{ 
		printf ("Usted no cumple con los requisitos minimos para ingresar \n");
		
		if(edad<7) printf("Edad insuficiente.");
		else printf("Altura insuficiente.");
	}		
	
	return 0;
}

/*Nos salta un error al poner edad : 7  altura : 1.40. */
