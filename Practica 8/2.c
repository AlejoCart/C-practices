#include<stdio.h>

int main(){
	
	char palabra1[100];
	char palabra2[100];
	int i,max;
	
	printf("Ingrese una frase(Max: 100 caracteres)\n");
	scanf("%s",palabra1);
	max=strlen(palabra1);
	
	for(i=0;i<max;i++) palabra2[i]=palabra1[i];

	printf("%s",palabra2);
	
	return 010;
}
