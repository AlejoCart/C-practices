#include<stdio.h>
#define TAM 2

struct est_Combustible{
 int tipo;
 int litros;        
};

struct est_servicio{
 int carga;  //lo hace la misma maquina por desfacaje de int i;
 int playero;
 int surtidor;
 struct est_Combustible combustibles;
}servicios[TAM];

int main(){
	int i;
	int j;
	 
	 
	 
	for(i=0; i<TAM; i++){
	//numero de carga	
	  printf("\n----------------------------------------------------");
	  printf("\n        El numero de carga es %i     \n", i+1);
	  printf("----------------------------------------------------\n");

	  //numero de surtidor del 1 al 4
	  printf("Digite su numero de surtidor(1-4): "); 
	  scanf("%i", &servicios[i].surtidor);
	  while(servicios[i].surtidor<1 || servicios[i].surtidor>4){
	  printf("\n ERROR!! Digite un numero del 1-4: ");
	  scanf("%i", &servicios[i].surtidor);
	  }
	 printf("\n-----------Eligio el surtidor %i---------\n", servicios[i].surtidor);
	 
	 printf("\n\nElija su player(1-3): ");
	 printf("\n1.Javier");
     printf("\n2.Jose");
	 printf("\n3.Victoria");
	 scanf("i%", &servicios[i].playero);
     while(servicios[i].playero<1 || servicios[i].playero>3){
            printf("\n Digite un numero del 1-3: ");
	        scanf("%i", &servicios[i].playero);
     }
     printf("\n-----------Eligio el playero numero: %i---------\n", servicios[i].playero);
     
     printf("\n Elija su combustible");
     printf("\n1.Nafta Super");
     printf("\n2.Nafta premium");
     printf("\n3.Diesel super");
     printf("\n4.Diesel premium");
     scanf("\n %i", &servicios[i].combustibles.tipo);
     while(servicios[i].combustibles.tipo<1 || servicios[i].combustibles.tipo>4){
           printf("\n ERROR!! Digite un numero del 1-3: ");
 	       scanf("%i", &servicios[i].combustibles.tipo);
		   }
	printf("\n-----------Eligio el combustible numero : %i---------\n", servicios[i].combustibles.tipo);	
		
    printf("Escriba la cantidad de litros de combustible : \n");
	scanf("%i", &servicios[i].combustibles.litros);
	printf("\n-----------Cargo : %i litros de combustible---------\n", servicios[i].combustibles.litros);
		
     
}

 for(i=0; i<TAM; i++){
printf("\n En el  surtidor %i con el playero: %i con el combustible %i se cargo la cantidad de %i litros de combustible", servicios[i].surtidor, servicios[i].playero, servicios[i].combustibles.tipo, servicios[i].combustibles.litros);	  

 
 }
 
 
 
 }

	
	

