#include <stdio.h>
#include<string.h>
#define maxProductos 10000
struct Valores{
	
	int compra;
	int venta;
	float IVA;
};
struct productos{
	char marca[20];
	char Descripcion[30];
	int codigo;
	struct Valores valor;
	int stock;
}almacen[maxProductos];
void cargas();
void generarInforme();
void mostrarProducto(int codigo);
int  main(){
	
	int eleccion,codigo,salir=0;
	do{
	printf("Que operacion desea realizar?\n");
	printf("1-Cargas\t2-Visualizar producto\t3-Generar informe\t4-salir: ");
	scanf("%i",&eleccion);
	switch (eleccion){
		
		case 1:{
			cargas();
			break;
		}
		case 2:{
			do{
			printf("Ingrese el codigo del producto");
			scanf("%i",&codigo);
			if(codigo<0) printf("Los codigos deben corresponder a valores positivos\n");
			else if(codigo>maxProductos) printf("El valor ingresado excede el maximo soportado, intente de nuevo\n");
			}while(codigo<0||codigo>maxProductos);
			mostrarProducto(codigo);
			break;
		}
		case 3:{
			generarInforme();
			break;
		}
		case 4:{
			salir=1;
			break;
		}
	}
	}while(salir!=1);
		return 0;
}
void cargas(){
	int cantidad=0,i,eleccion;
	
	do{
		printf("Cuantas cargas desea realizar?");
		scanf("%i",&cantidad);
		if(cantidad<0) printf("Los cantidad debe ser un numero positiva\n");
		else if(cantidad>maxProductos) printf("El valor ingresado excede el maximo soportado, intente de nuevo\n");
		}while(cantidad<0||cantidad>maxProductos);
		
		for(i=0;i<cantidad;i++){
			do{
				printf("Ingrese una breve descripcion max:30 caracteres: ");
				scanf("%s",almacen[i].Descripcion); //El programa no se banca espacios en blanco
				}while(strcmp(almacen[i].Descripcion,"")==0);
			do{
				printf("Ingrese el valor de compra (max:50.000): ");
				scanf("%i",&almacen[i].valor.compra);
				if(almacen[i].valor.compra<0) printf("El valor debe de ser positivo, intente de nuevo\n");
				else if(almacen[i].valor.compra>50000) printf("El monto ingresado excede el valor maximo de compra de un producto, intente nuevamente\n");
				}while(almacen[i].valor.compra<0||almacen[i].valor.compra>50000);
			do{
				printf("Ingrese el valor de venta (max:50.000): ");
				scanf("%i",&almacen[i].valor.venta);
				if(almacen[i].valor.venta<0) printf("El valor debe de ser positivo, intente de nuevo\n");
				else if(almacen[i].valor.compra>50000) printf("El monto ingresado excede el valor maximo de venta de un producto, intente nuevamente\n");
				}while(almacen[i].valor.venta<0||almacen[i].valor.venta>50000);
			do{
				printf("Seleccione un valor de IVA\n1-10.5%\t2-21%: ");
				scanf("%i",&eleccion);
				if(eleccion!=1 && eleccion!=2) printf("Opcion inexistente, intente de nuevo\n");
			}while(eleccion!=1 && eleccion!=2);
			if(eleccion==1) {
				almacen[i].valor.IVA=10.5;
			}
			else almacen[i].valor.IVA=21;
			
			do{
				printf("Ingrese el stock: ");
				scanf("%i",&almacen[i].stock);
				if(almacen[i].stock<0) printf("Debe existir almenos una unidad del producto, intente de nuevo");
			}while(almacen[i].stock<0);
			do{
				printf("Ingrese la marca: ");
				scanf("%s",almacen[i].marca);
				if(strcmp(almacen[i].marca,"")==0) printf("El campo no puede estar vacio\n");
			}while(strcmp(almacen[i].marca,"")==0);
			
			almacen[i].codigo=i+1;
			printf("\n");
		}
}
void mostrarProducto(int codigo) {
	int i,codigoProducto=codigo;
	int valorVenta;
	for(i=0;i<maxProductos;i++){
	if(almacen[i].codigo==codigoProducto) {
		valorVenta=almacen[i].valor.venta+((almacen[i].valor.IVA/100)*almacen[i].valor.venta);
		printf("\nDescripcion: %s\nValor De venta: %i\nStock: %i\n",almacen[i].Descripcion,valorVenta,almacen[i].stock);
		break;
		}
	}
}
void generarInforme(){
	int i;
	printf("Generando informe");
	FILE *f;
	f=fopen("stock.txt","w");
	fprintf(f,"Informe de stock\n");
	fprintf(f,"Codigo\tProducto\tMarca\tStock\n");
	for(i=0;i<maxProductos;i++){
		fprintf(f,"%i\t%s\t\t%s\t%i\n",(almacen[i].codigo)+1,almacen[i].Descripcion,almacen[i].marca,almacen[i].stock);
	}
	
}


