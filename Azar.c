#include<stdio.h>

int main(){
	int numazar1;
	srand(time(NULL));
	
	// Elijo un numero aleatorio entre 18 y 80
	// la formula (rand modulo 80-18+1) + 18
	// La formula es rand()%63 + 18
	// Formula general rand()%(ValorSuperior-ValorInferior+1)+ValorInferior
	// ruleta: rand()%37
	// dado: rand()%6+1
	// numeros entre 160 y 200: rand()%41+160
	numazar1 = rand()%63+18;
		
	printf("La maquina eligio el numero %i \n", numazar1);
		
	return 0;
}
