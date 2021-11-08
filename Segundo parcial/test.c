#include<stdio.h>

void main(){
	
	void cargasManual(){
	
	int i;
	int eleccion=0;
	for(i=0;i<=maxRegistros-1;i++){
	do{
			printf("Ingrese numero surtidor: ");
			scanf("%i",&sistema[i].surtidor);
			if(sistema[i].surtidor<0|| sistema[i].surtidor>4) 
			printf("Surtidor inexistente,porfavor intente de nuevo\n");
		}while(!(sistema[i].surtidor>0 && sistema[i].surtidor<=4));
				
	do{			
	printf("\nNafta o Disel?\n1-Nafta \t 2-Diesel\n");
	scanf("%i",&eleccion);
		if(eleccion!=1 && eleccion!=2) mensajeError();
			}while(eleccion!=1 && eleccion!=2);
	
	if(eleccion==1) strcat(sistema[i].tipoCombustible.nombre,"Nafta");
		else strcat(sistema[i].tipoCombustible.nombre,"Diesel");
			eleccion=0;
			do{
	printf("\nSuper o Premiun?\n1-Super\t 2-Premiun\n");
	scanf("%i",&eleccion);
		if(eleccion!=1 && eleccion!=2) mensajeError();
			}while(eleccion!=1 && eleccion!=2);
			
	if(eleccion==1) strcat(sistema[i].tipoCombustible.nombre," Super");
	else strcat(sistema[i].tipoCombustible.nombre," Premiun");
	eleccion=0;
	
	do{
		printf("\nCuantos litros desea cargar?");
		scanf("%i",&eleccion);
		if(eleccion<0) 
		printf("Si desea proporcionar combustible a la empresa, favor de comunicarse con la gerencia, si no intente de nuevo\n");
		else if(eleccion>32767) printf("La cantidad solicitada excese el maximo suministrado por el surtidor, favor de solicitar una cantidad menor\n");
	}while(eleccion<0 ||eleccion>32767);
	sistema[i].tipoCombustible.litros=eleccion;
	//printf("%s\n",sis.tipoCombustible.nombre);
	printf("\nLo atendio: 1-Javier\t 2-Jose\t 3-Victoria\n");
	do{
		scanf("%i",&eleccion);
		if(eleccion<0 || eleccion>3) printf("Playero inexsistente, intentelo de nuevo\n");
		}while(eleccion<0 || eleccion>3);
		
		if(eleccion==1) strcpy(sistema[i].playero,"Javier");
		else if(eleccion==2) strcpy(sistema[i].playero,"Jose");
		else if(eleccion==3) strcpy(sistema[i].playero,"Victoria");
	
		//printf("Atendido por: %s",sistema[i].playero);
		
		do{
			printf("Desea realizar otra carga?\n 1-si \t 2-no :");
			scanf("%i",&eleccion);
			if(eleccion!=1 && eleccion!=2) mensajeError();
		}while(eleccion!=1 && eleccion!=2);	
		if(eleccion==2) break;	
		}
	}
}
