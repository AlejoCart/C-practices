#include<stdio.h>

int jugadaMaquina(int* m){
	
	*m=rand()%3+1;
	return *m;
}

void partida(int j, int m, int* puntosJ, int* puntosM){
	
	switch(j){
    	
    	case 1:{
    		
    		switch(m){
    			
    			case 1:{
    				
    				printf("Piedra vs Piedra.\nEmpate.\n");
    				printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
				case 2:{
					
					printf("Piedra vs Papel.\nGana la maquina.\n");
					*puntosM=*puntosM+1;
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
				case 3:{
					
					printf("Piedra vs Tijeras.\nGana el jugador.\n");
					*puntosJ=*puntosJ+1;
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
    			
			}
    		
			break;
		}
		
		case 2:{
			
			switch(m){
			    case 1:{
    				
    				printf("Papel vs Piedra.\nGana el jugador.\n");
    				*puntosJ=*puntosJ+1;
    				printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
				case 2:{
					
					printf("Papel vs Papel.\nEmpate.\n");
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
				case 3:{
					
					printf("Papel vs Tijeras.\nGana la maquina.\n");
					*puntosM=*puntosM+1;
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
			
		    }
		
		    break;
	    }
		case 3:{
			
			switch(m){
			
			case 1:{
    				
    				printf("Tijeras vs Piedra.\nGana la maquina.\n");
    				*puntosM=*puntosM+1;
    				printf("Jugador: %i - Maquina:%i",*puntosJ,*puntosM);
					break;
				}
				case 2:{
					
					printf("Tijeras vs Papel.\nGana el jugador.\n");
					*puntosJ=*puntosJ+1;	
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
				case 3:{
					
					printf("Tijeras vs Tijeras.\nEmpate.\n");
					printf("Jugador: %i - Maquina: %i",*puntosJ,*puntosM);
					break;
				}
			
		    }
    		break;
       }
	 }
	
}

void main(){
	
	int j,m,rep,puntosM,puntosJ;
	srand(time(NULL));
	
	do{
		puntosM=0;
	    puntosJ=0;
		
	while(puntosJ<3 && puntosM<3){
	
	do{
		
	printf("1: Piedra - 2:Papel - 3:Tijeras \n");
	scanf("%i",&j);
	printf("\n");
	
	if(j!=1 && j!=2 && j!=3) printf("Opcion incorrecta, intente de nuevo\n");
	
    }while(j!=1 && j!=2 && j!=3);
    
    jugadaMaquina(&m);
    
    partida(j,m,&puntosJ,&puntosM);
    printf("\n");
    
  }
  
  if(puntosJ>puntosM) printf("Felicidades, otro juego?\n 1=si 2=no");
  else printf("Mejor suerte la proxima, otro juego?\n 1=si 2=no");
  scanf("%i",&rep);
  
  }while(rep==1);
  
  printf("Hasta luego, tenga un buen dia");
  
}
