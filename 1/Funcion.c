#include<stdio.h>
#include<math.h>

int main(){
	
	int x;
	int y;
	double funcion;
	
	printf("Ingrese los valores de X e Y ");
	scanf("%d%d", &x,&y);
	
	funcion=sqrt(x)/(pow(y,2)-1);
	
	printf("El valor de la funcion es: %f", funcion);
		
	return 0;
}
