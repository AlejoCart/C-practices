#include<stdio.h>

int main (){
	
	int tempEx=0;
	int tempAlta=0;
	int tempBaja=9999;
	int i;
	for(i=1;i<=24;i++){
		
		if(i%4==0){
			
			printf("Ingresar temperatura exterior: \n");
			scanf("%i",&tempEx);
			if(tempEx>tempAlta) {tempAlta=tempEx;}
			 if(tempEx<tempBaja) {tempBaja=tempEx;}
			
			printf("%i", tempAlta);
			printf("%i", tempBaja);
			
		}
		
	}
	
	
	return 0;
}
