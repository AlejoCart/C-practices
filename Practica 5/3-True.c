#include<stdio.h>

float operacion(int op){
	
	int a,b,re;
	
	printf("Ingrese el primer valor: ");
			scanf("%i",&a);
			printf("\nIngrese el segundo valor: ");
			scanf("%i",&b);
	
	switch(op){
		
		case 1:{
			
			 re=a+b;
			break;
		}
		case 2:{
			re=a-b;
			break;
		}
		case 3:{
			
			re=a*b;
			break;
		}
		case 4:{
			re=a/b;
			break;
		}
		default:{
			printf("Opcion incorrecta, intente nuevamente");
			break;
		}
			
	}
	printf("\nEl resultado es: %i\n",re);	
}


int main(){
	
	int op;
		
		printf("Bienvenido\n");
		
		do{
			printf("Escoja una opcion: \n");
			printf("1: suma\n");
			printf("2: resta\n");
			printf("3: multiplicacion\n");
			printf("4: divicion\n");
			printf("0 : exit\n");
			scanf("%i",&op);
			if(op>0){
				operacion(op);
			}
			
		}while(op>0 );
	
	printf("Hasta luego");
	
    return 0;
}
