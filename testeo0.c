#include<stdio.h>
#include<stdlib.h>

void numeroRandom(int* num1, int*num2){
	
	*num1=rand()%100+1;
	*num2=rand()%100+1;
	
}

void main(){
	
	int a,b;
	
	printf("%i\n",a);
	printf("%i\n",b);
	printf("puntero de a: %p \n",&a);	
	printf("puntero de b: %p \n",&b);
	
	numeroRandom(&a,&b);
		
	printf("%i\n",a);
	printf("%i\n",b);
	
}
