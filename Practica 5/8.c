#include <stdio.h>

void orMenor(int a, int b, int c){
	
	if(a<b&&a<c){
		printf("%i ",a);
		if(b<c){
			printf("%i ",b);
			printf("%i ",c);
			}
		 else{
		 	printf("%i ",c);
			printf("%i ",b);
		 }
		
	}else if(b<a&&b<c){
		printf("%i ",b);
		if(a<c){
			printf("%i ",a);
			printf("%i ",c);
		}else{
			printf("%i ",c);
			printf("%i ",a);
		}	
	}else{
		printf("%i ",c);
		if(a<b){
			printf("%i ",a);
			printf("%i ",b);
		}else{
			printf("%i ",b);
			printf("%i ",a);
		}
	}
}

void main(){
	
	int a,b,c;
	
	printf("Ingrese un numero ");
	scanf("%i",&a);
	printf("Ingrese un numero ");
	scanf("%i",&b);
	printf("Ingrese un numero ");
	scanf("%i",&c);
	
	orMenor(a,b,c);
	
	
}
