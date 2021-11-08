#include<stdio.h>

int main(){
	
	int ingreso, i;
	int factor1=0;
	int factor2=0;
	int Dfactor1=0;
	int Dfactor2=0;
	
	printf("Ingrese un numero a descomponer: ");
	scanf("%i",&ingreso);
		//printf("Test\n");
	for(i=2;i<ingreso;i++){
		
		//printf("Test %i\n",i);
		if(i%2!=0){
			if(i%i==0 &&!(factor1!=0))factor1=i;
			else if(i%i==0 &&!(factor2!=0))factor2=i;
			
			printf("%i\n",factor2);
		if(factor1!=0){
		if(ingreso%factor1==0 && Dfactor1==0) Dfactor1=factor1;
		else if(ingreso%factor1==0 && Dfactor1==0) {Dfactor2=factor1;}
		else if  factor1=0;
	}
		if(factor2!=0){
		if(ingreso%factor2==0 && Dfactor2==0) Dfactor2=factor2;
		else if (Dfactor2==0)factor2=0;
	}
		//else factor2=0;
			printf("%i ",factor2);
				printf("%i \n",Dfactor2);
	}
	}
	
	printf("Factores primos de %i: %i & %i ",ingreso,Dfactor1,Dfactor2);
		printf("%i",factor2);
	return 0;
}
