#include<stdio.h>
//cosa de funcionar
int main(){
	
	int tempEx=0;
	int tempAlta=0;
	int tempBaja=9999;
	int i;
	int sumaTemp=0;
	double media=0;
	
	for(i=1;i<=24;i++){
		
		printf("Hora: %i \n",i);
		
		if(i%4==0){
			printf("Ingresar temperatura exterior\n");
			scanf("%i",&tempEx);
			
			sumaTemp+=tempEx;
			//printf("%i",sumaTemp);
			if(tempBaja>tempEx) {tempBaja=tempEx;}
			if(tempEx>tempAlta) {tempAlta=tempEx;}
		    
		    //printf("\ntemp baja %i", tempBaja);
		    //printf("\ntemp alta %i", tempAlta);
		}
	}
	media=sumaTemp/6;
	printf("Resumen del dia: \n");
	printf("Temperatura mas alta: %i\n",tempAlta);
	printf("Temperatura mas baja: %i\n",tempBaja);
	printf("Media de temperatura: %.1f",media);
	return 0;
}
