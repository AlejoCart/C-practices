#include<stdio.h>

void cambio(int v){

	const int mil=1000;
	const int quini=500;
	const int dosc=200;
	const int cien=100;
	const int cincuenta=50;
	const int veinte=20;
	const int diez=10;
	const int cinco=5;
	const int dos=2;
	const int uno=1;
	
	int ref; 
	
	if(v/mil>=1) {
		ref=v/mil;
		printf("%i billetes de mil\n",ref);
		v-=(mil*ref);
	}if(v/quini>=1){
		ref=v/quini;
		printf("%i billetes de quinientos\n",ref);
		v-=(quini*ref);
	}if(v/dosc>=1) {
		ref=v/dosc;
		printf("%i billetes de doscientos\n",ref);
		v-=(dosc*ref);
	}if(v/cien>=1) {
		ref=v/cien;
		printf("%i billetes de cien\n",ref);
		v-=(cien*ref);
	}if(v/cincuenta>=1) {
		ref=v/cincuenta;
		printf("%i billetes de cincuenta\n",ref);
		v-=(cincuenta*ref);
	}if(v/veinte>=1) {
		ref=v/veinte;
		printf("%i billetes de veinte\n",ref);
		v-=(veinte*ref);
	}if(v/diez>=1) {
		ref=v/diez;
		printf("%i billetes de diez\n",ref);
		v-=(diez*ref);
	}if(v/cinco>=1) {
		ref=v/cinco;
		printf("%i billetes de cinco\n",ref);
		v-=(cinco*ref);
	}if(v/dos>=1) {
		ref=v/dos;
		printf("%i billetes de dos\n",ref);
		v-=(dos*ref);
	}if(v/uno>=1) {
		ref=v/uno;
		printf("%i billetes de uno\n",ref);
		v-=(uno*ref);
	}
}

int main(){ 
	
	int valor;
	printf("Ingrese un valor ");
	scanf("%i",&valor);
	cambio(valor);
	
	return 0;
}


