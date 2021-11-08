#include<stdio.h>
// 1-3 9 veces
void main(){
	
	int i=1;
	int j=1;
	
	while(i<=9){
		
		do{
			printf("%i",j);
			j++;
		}while(j<=3);
		j=1;
		printf("\n");
		i++;
	}
	
}
