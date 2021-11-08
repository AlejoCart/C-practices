#include<stdio.h>
#include<math.h>
#include <stdbool.h>
void main(){
	
	 int c, n, contador;
	 bool encontrado;
	 srand(time(NULL));
    n = rand() % 100 + 1;
    printf("%i",n);
    
    printf("Juego del saber: adivine el numero \n");
    
    while(!encontrado){
    printf("Adivine el numero: \n");
    scanf("%i",&c);
    
    if(c==n){
	encontrado=true;
	}else if(c<n){
		printf("Muy pequeño, como tu tula\n");
	}else if(c>n){
		printf("Muy grande, para un poco fiera\n");
	}

contador++;	
}
    printf("Ganaste, bien hecho amigo. \n Costo: %i intentos", contador);
    

}
