#include <stdio.h>

int main(){
	
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int media;
	
	printf("Ingrese las cuatro notas: ");
	scanf("%d", &nota1);
	scanf("%d", &nota2);
	scanf("%d", &nota3);
	scanf("%d", &nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	printf("La nota media es: %d", media);
	
	return 0;
}
