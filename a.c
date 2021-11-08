#include<stdio.h>

void main(){
	
	int size=10000,i;
	int matriz [size];
	srand(time(NULL));
	
	for(i=0;i<size;i++) matriz[i]=rand()%1000;
	
}
