#include<stdio.h>
#include<string.h>
#include<conio.h>
#define maxRegistros 51	

	struct combustible{
		char nombre[20];
		int litros;
	};
	
	struct sistemaRegistro{	
	struct combustible tipoCombustible;
	char playero [20];
	int surtidor;
	};
	struct sistemaRegistro sistema[maxRegistros];
	
void cargas();
void cargasAuto();
void mensajeError();
void generarInforme();
int cantidadSurtPlay(int sur, char play[20]);
void litrosDespachadosSurtidor();

void main(){
	
	int i,continuar=0,fin=0,eleccionSurtidor=0,opcion=0,contador=0;
	char eleccionPlayero[20],mayuscula;
	do{ 
		printf("Bienvenido al sistema selecione una opcion\n");
		printf("1-Generar cargas\t2-Litros despachados por surtidor \t3-Litros despachados por playero \n4-Generar informe \t5-Salir del programa\n");
		printf(":");
		scanf("%i",&opcion);
		switch (opcion){
			
		case 1:{
			if(contador>0){
			printf("Adventencia, de existir informacion de carga previa sera borrada, proseguir?\n1-Si\t2-No\n");
			scanf("%i",&continuar);
			if(continuar==1){
		printf("Generando cargas...\n");
			cargasAuto();}
			else continue;}
			else {printf("Generando cargas...\nCargas Generadas!\n");
				cargasAuto();
				}
			contador++;	
		break;}
		
		case 2:{
			if(strcmp(sistema[1].playero,"")==0) printf("No se encuentran cargas registradas, seleccione la opcion 1 para generarlas\n");
			else litrosDespachadosSurtidor();
			break;}

		case 3:{
			if(strcmp(sistema[1].playero,"")==0) printf("No se encuentran cargas registradas, seleccione la opcion 1 para generarlas\n");
			else {
			do{
			printf("Ingrese el numero de surtidor\n");
			scanf("%i",&eleccionSurtidor);
			printf("\n");
			if(eleccionSurtidor<0 && eleccionSurtidor>4) mensajeError();
			}while(eleccionSurtidor<0 && eleccionSurtidor>4);
			
			do{printf("Ingrese el nombre del playero (Javier,Jose,Victoria)\n");
			scanf("%s",eleccionPlayero);
			printf("\n");
			strlwr(eleccionPlayero);
			if(strcmp(eleccionPlayero,"javier")!=0 && strcmp(eleccionPlayero,"jose")!=0 && strcmp(eleccionPlayero,"victoria")!=0)  mensajeError();
			}while(strcmp(eleccionPlayero,"javier")!=0 && strcmp(eleccionPlayero,"jose")!=0 && strcmp(eleccionPlayero,"victoria")!=0);
				printf("%s despacho %i veces en el surtidor %i \n\n",eleccionPlayero,eleccionSurtidor,cantidadSurtPlay(eleccionSurtidor,eleccionPlayero));
				}
			break;
		}
		case 4 :{
			if(strcmp(sistema[1].playero,"")==0) printf("No se encuentran cargas registradas, seleccione la opcion 1 para generarlas\n");
				else {
				generarInforme();
				printf("\nInforme generado!\n");
				}
				break;
			}
		case 5 :{
				fin=1; 
			break;
		}
		default: mensajeError();
		}	
			}while(fin!=1);
		printf("Fin del programa, tenga un buen dia");
}
 /*FIN DEL MAIN*/

void cargasAuto(){
	
		srand(time(NULL));
	int i;
	int eleccion=0;
	for(i=1;i<=maxRegistros;i++){
	do{
			sistema[i].surtidor=(rand()%4)+1;
			if(sistema[i].surtidor<0|| sistema[i].surtidor>4) 
			printf("Surtidor inexistente,porfavor intente de nuevo\n");
		}while(!(sistema[i].surtidor>0 && sistema[i].surtidor<=4));
				
			do{			
			eleccion=(rand()%2)+1;
			if(eleccion!=1 && eleccion!=2) mensajeError();
			}while(eleccion!=1 && eleccion!=2);
	
		if(eleccion==1) strcat(sistema[i].tipoCombustible.nombre,"Nafta");
			else strcat(sistema[i].tipoCombustible.nombre,"Diesel");
			eleccion=0;
			do{
			eleccion=(rand()%2)+1;
			if(eleccion!=1 && eleccion!=2) mensajeError();
			}while(eleccion!=1 && eleccion!=2);
			
	if(eleccion==1) strcat(sistema[i].tipoCombustible.nombre," Super");
	else strcat(sistema[i].tipoCombustible.nombre," Premiun");
	eleccion=0;
	
	do{
		eleccion=(rand()%100)+1;
		if(eleccion<0) 
		printf("Si desea proporcionar combustible a la empresa, favor de comunicarse con la gerencia, si no intente de nuevo\n");
		else if(eleccion>32767) printf("La cantidad solicitada excese el maximo suministrado por el surtidor, favor de solicitar una cantidad menor\n");
	}while(eleccion<0 ||eleccion>32767);
	sistema[i].tipoCombustible.litros=eleccion;
	do{
		eleccion=(rand()%3)+1;
		if(eleccion<0 || eleccion>3) printf("Playero inexsistente, intentelo de nuevo\n");
		}while(eleccion<0 || eleccion>3);
		
		if(eleccion==1) strcpy(sistema[i].playero,"Javier");
		else if(eleccion==2) strcpy(sistema[i].playero,"Jose");
		else if(eleccion==3) strcpy(sistema[i].playero,"Victoria");
	
	}
}
///////////////////////////////////////////
	void litrosDespachadosSurtidor(){
		int surtidor=0;
		int eleccion=0;
		int litrosDespachados=0,i;
		char tipoCombustible[20];
		do{
			printf("Ingrese numero surtidor: ");
			scanf("%i",&surtidor);
			if(surtidor<0|| surtidor>4) 
			printf("Surtidor inexistente,porfavor intente de nuevo\n");
		}while(!(surtidor>0 && surtidor<=4));
		do{
			printf("Ingrese el tipo de combustible\n1-Nafta\t 2-Diesel: ");
			scanf("%i",&eleccion);
			printf("\n");
			if(eleccion!=1 && eleccion!=2) mensajeError();
		}while(eleccion!=1 && eleccion!=2);
		
		if(eleccion==1)
		strcpy(tipoCombustible,"Nafta");
		else strcpy(tipoCombustible,"Diesel");
		
		do{
			printf("Super o Premiun\n1-Super\t 2-Premiun: ");
			scanf("%i",&eleccion);
			printf("\n");
			if(eleccion!=1 && eleccion!=2) mensajeError();
		}while(eleccion!=1 && eleccion!=2);
		if(eleccion==1)
		strcat(tipoCombustible," Super");
		else strcat(tipoCombustible," Premiun");
		
		for(i=0;i<maxRegistros;i++) 
		if( sistema[i].surtidor==surtidor &&strcmp(sistema[i].tipoCombustible.nombre,tipoCombustible)==0) litrosDespachados+=sistema[i].tipoCombustible.litros;
		
		printf("\nLa cantidad de litros despachados de %s en el surtidor numero %i son: %i\n\n",tipoCombustible,surtidor,litrosDespachados);
	}
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
int cantidadSurtPlay(int surt, char play [20]){
	int usos=0;
	int j;
	int surtidor=surt;
	char playero[20];
	strcpy(playero,play);
		for(j=0;j<maxRegistros;j++){
			if(surtidor==sistema[j].surtidor && strcmp(strlwr(sistema[j].playero),playero)==0) usos++;
				}
	return usos;
}
/////////////////////////////////////////////////////////////////////////////////
void mensajeError(){
	printf("Opcion incorrecta, intente de nuevo\n");
}
////////////////////////////////////////////////////////////////////////////////
void generarInforme(){
	int i;
	printf("Dentro de generar informe");
	FILE *f;
	f=fopen("informe.txt","w");
	fprintf(f,"Ventas del Mes: Estacion de Servicio YPF\n");
	fprintf(f,"Carga\tPlayero\t\tSurtidor\tTipo Combustible\tLitros\n");
	for(i=1;i<maxRegistros;i++){
		if(strcmp(sistema[i].playero,"Victoria")!=0)
		fprintf(f,"%i\t%s\t\t%i\t\t%s\t\t%i\n",i,sistema[i].playero,sistema[i].surtidor,sistema[i].tipoCombustible.nombre,sistema[i].tipoCombustible.litros);
		else fprintf(f,"%i\t%s\t%i\t\t%s\t\t%i\n",i,sistema[i].playero,sistema[i].surtidor,sistema[i].tipoCombustible.nombre,sistema[i].tipoCombustible.litros); 
	}
}

