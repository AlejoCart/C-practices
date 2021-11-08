#include<stdio.h>

//recordar usar el * cuando se referencie a los parametros pasados por referencia.

void tiempo(int *totSeg,int *horas2, int *min2, int *seg2){
	
	/*int totalSeg=totSeg;
	int horas=horas2;
	int min=min2;
	int seg=seg2;*/
	int ref2;
	float ref=*totSeg;
	
	if(ref/ *horas2>=1){
		ref2=ref/ *horas2;
		printf("%i horas\n",ref2);
		ref=(ref/ *horas2);
		ref=(ref-ref2)*3600;
	}if(ref/ *min2>=1){
		ref2=ref/ *min2;
		printf("%i minutos\n",ref2);
		ref=(ref/ *min2);
		ref=(ref-ref2)*60;
	}if(ref/ *seg2>1){
		ref2=ref;
		printf("%i segundos\n",ref2);
	}
}

int main(){
	
	int totalesS;
	int Seg=1;
	int min=60;
	int hora=3600;
	
	printf("Ingrese segundos totales ");
	scanf("%i",&totalesS);
	
	tiempo(&totalesS,&hora,&min,&Seg);	
	return 0;
}


