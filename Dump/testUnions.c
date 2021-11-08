#include<stdio.h>

void main(){
	
	typedef union{
		
	int costoEntero;
	float costoDecimal;
	short costoSmall;
		
	} costos; 
	
	typedef struct{
		
		char* nombre;
		costos price;
		
	}Productos;
	
	typedef enum{
		
		CHIQ,ENTERO,DECI
		
	}Type;
	
	costos Cos={.costoEntero=14};
	
	printf("%i \n",Cos.costoEntero);
	
	Cos.costoDecimal = 16.89;
	
	printf("%.2f\n",Cos.costoDecimal);
	
	Cos.costoSmall=1;
	
	printf("%i \n",Cos.costoSmall);
	//printf("%i is the maximun size of the union.\n",sizeof(Cos));
	
//	printf("%i\n",&Cos.costoEntero);
//	printf("%i\n",&Cos.costoDecimal);
//	printf("%i\n",&Cos.costoSmall);
	
	
//	Productos carne={"Vaca",.price.costoDecimal=99.99};
	Cos.costoDecimal=18.888;
	Type c =ENTERO;
	
	if(c==CHIQ){
		printf("Precio chiquito: %i",Cos.costoSmall);
	}else if(c=ENTERO){
		printf("Precio entero %f",Cos.costoDecimal);
	}
	
	
}
