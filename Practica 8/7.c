
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	
	char nombre[20];
	printf("Ingrese su nombre en mayusculas");
	gets(nombre);
	if(nombre[0]=='A') strlwr(nombre);
	printf("%s",nombre);
	
	getch();
	return 0;
}
