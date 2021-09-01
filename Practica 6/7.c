#include<stdio.h>

char randmChar(){
	
	char c=(char)(rand()%300-127);
	return c;
}

void main(){
	srand(time(NULL));
	int size=5;
	int i;
	char primero[5], segundo[5],tercero[size*2];
	
	for(i=0;i<size;i++){
		
		primero[i]=randmChar();
		segundo[i]=randmChar();
		
	}
	printf("Primer texto: %s\n",primero);
	printf("Segundo texto: %s\n",segundo);
	
	for(i=0;i<size*2;i++){
		
		if(i<size){
			tercero[i]=primero[i];
		}else {
			tercero[i]=segundo[i-size];
		}
		
	}
	printf("Tercer texto: %s",tercero);
	
	
}
