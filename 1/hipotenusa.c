#include<stdio.h>
#include<math.h>

int main(){
	
	int cateto1;
	int cateto2;
	double hipotenusa;
	
	printf("Ingrese cateto 1 ");
	scanf("%d",&cateto1);
	printf("Ingrese cateto 2 ");
	scanf("%d",&cateto2);
	
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("Hipotenusa: %f", hipotenusa);
	return 0;
}
