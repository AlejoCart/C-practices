#include<stdio.h>
#include<math.h>

int main(){
	int numero, numero2;
	srand(time(NULL));
	
	numero = rand()%6+1;
	//numero2 = rand();
	
	printf("El numero elegido es: %i\n", numero);
	//printf("El numero elegido es: %i", numero2);
	
	
	return 0;
}

