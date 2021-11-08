#include<stdio.h>

typedef struct  {
	
	int age;
	char* name;
	char* race;
	
	
}perro;


void main(){
	
	perro perro1={8,"pastor","labrador"}; 
	
	printf("%i, %s, %s ",perro1.age, perro1.name,perro1.race);
	
	
}
