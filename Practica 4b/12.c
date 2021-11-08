#include<stdio.h>
//me sale fueho de la cabeza mama
void main(){
	
	int contador1,contador2,contador3;
	int aprobado;
	int todosEx,unEx,finalEx=0;
	int i=1;
	int j;
	
	do{
		contador1=0;
		contador2=0;
		contador3=0;
		for(j=1;j<=3;j++){
			
		printf("Alumno nro: %i, aprobo el examen nro %d ? ingrese y si aprovo y 0 si no: ",i,j);
		scanf("%i",&aprobado);
			
		if (j==1 && aprobado==1) contador1++;
		else if(j==2 && aprobado==1) contador2++;
		else if(j==3 && aprobado==1)contador3++;
	}
		if(contador1==1 &&contador2==1 &&contador3==1) todosEx++;
		if(contador3==1 && contador1==0 && contador2==0) finalEx++;
		if(contador1==1||contador2==1||contador3==1) unEx++;
		
	printf("\n");
	i++;
}while(i<=5);
        
     printf("Alumnos que aprobaron todos los examenes %i \n", todosEx);
     printf("Alumnos que aprobaron por lo menos un examene %i\n", unEx);
     printf("Alumnos que aprobaron solo el ultimo examen %i\n", finalEx);





}

