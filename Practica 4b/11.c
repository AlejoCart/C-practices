#include <stdio.h>
//fibonacci bien... funca 'mano BIEN!! 

int main(){
	
	int i,numero,a,b;
	int fibonacci;
	int fi1=1;
	int fi2=1;
	
	
	printf("el numero hasta el cual desea saber el golden ratio es:");
	scanf("%i",&numero);
	
	for(i=0;i<numero;i++) {
		
		//if(i==0) fi2=0;
		//else if(i==1||i==2) fi3=1;
		 
		if(i==0||i==1) printf("%i ",1);
		else if(i>=2){
		fibonacci=(fi1)+(fi2);
		printf("%i ",fibonacci);
		
		fi1=fi2;
		fi2=fibonacci;
		}
		
	}
	return 0;
	
}
