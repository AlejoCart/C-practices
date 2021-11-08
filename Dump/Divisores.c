#include<stdio.h>


void main(){
	
	int a,b,c;
	int i;
	
	printf("numero 1: ");
	scanf("%i",&a);
	printf("numero 2: ");
	scanf("%i",&b);
	
	for(i=0;i<100;i++){
		
		if(a>b){
		if(a%b==0){
			
			printf("El maximo comun divisor es: %i",b);
			break;
		}else{
			
			c=a;
			a=b;
			b=c%a;
		}	
	}
	
	if(b>a){
		c=b;
		b=a;
		a=c;
	}
	
	
	}
	
	
	
	
}
