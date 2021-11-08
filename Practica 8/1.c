#include<stdio.h>
#include <string.h>
void main(){
	
	
	char palabra[20] ;
	int i;
	
	printf("Ingrese una palabra(no mas de 10 caracteres)\n");
	scanf("%s",palabra);
	
	if(strlen(palabra)<10) printf("%s",palabra); 
	//getch();

	
	
	
}
