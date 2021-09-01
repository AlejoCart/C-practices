
#include<stdio.h>
#include<string.h>
 
 
void main(){
	
	char palabra[]={"akka"};
	char palabra2[]={"akakra"};
	
	strupr(palabra);
	strupr(palabra2);
	
	if(strcmp(palabra,palabra2)==0)printf("Son iguales");
	else printf("No son iguales");
	
	getch();
	
}
