#include<stdio.h>
#include<string.h>

void main(void){
	
	char palabra[]={"axcaa"};
	char palabra2[20];
	int i,contador=0,len,flag=0;
	printf("Palabra: %s\n",strrev(palabra));
	strcpy(palabra2,strrev(palabra));
	printf("Reverso: %s\n",palabra2);
	len=strlen(palabra);
	
	/*for(i=0;i<len;i++) if(palabra[i] != palabra2[i]) {
		printf("La palabra no es un palindromo");
		break;
	}
	if(flag==1) printf("La palabra es un palindromo");
	*/
	//if(palabra==palabra2)
	//if(strcmp(palabra,palabra2)==0) printf("La palabra es un palindromo!");
	//else printf("La palabra no es un palindromo");
	/*
	for(i=0;i<strlen(palabra);i++){
	if((char)palabra[i]==(char)palabra2[i])contador++;
			}
			printf("%i",contador);
	
	if(contador==strlen(palabra)) printf("La palabra es un palindromo!");
	else printf("La palabra no es un palindromo");*/
	
	
}
