#include<stdio.h>

void tiempo(int *totSeg,int *horas2, int *min2, int *seg2){
	
	int totalSeg=totSeg;
	int horas=horas2;
	int min=min2;
	int seg=seg2;
	int ref2;
	float ref=totalSeg;
	
	if(ref/horas>=1){
		ref2=ref/horas;
		printf("%i horas\n",ref2);
		ref=(ref/horas);
		ref=(ref-ref2)*3600;
	}if(ref/min>=1){
		ref2=ref/min;
		printf("%i minutos\n",ref2);
		ref=(ref/min);
		ref=(ref-ref2)*60;
	}if(ref/seg>1){
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


