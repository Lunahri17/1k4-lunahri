#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha
{
	int dia, mes, anio;
};

struct registro
{
	int codigo;
	char descripcion[35];
	float precio;
	int cantidad;
	fecha fecha_compra;
	char proveedor[35];
};

int cargar(registro amp[50]);
void ordenar(int n, registro amp[50]);
void mostrar(int n, registro amp[50]);
void consultar(int n, registro amp[50]);
int menuPrincipal();

main()
{
	int n, i, nOp;
	registro ampere[50];

	do
	 {
	  nOp = menuPrincipal(); //Llama la función que muestra el menú. 
	  switch(nOp)
	  {
	   case 1:
	    n=cargar(ampere);
	    break;
	   case 2:
	    mostrar(n,ampere); 
	    break;                                 
	   case 3:
	   	consultar(n,ampere);
	    break;
	   case 4:
	    ordenar(n,ampere);
	    break;
	   case 5:
	    system("CLS");
	    printf("\nF i n   d e l   P r o g r a m a");
	    printf("\n");
	    system("pause");
	    break;
	   default:
	    system("CLS");
	    printf("Ha ingresado un numero no valido");
	    printf("\n");
	    system("pause");	    
	    break;
	  }  //Fin del switch().
	 }while(nOp != 5);         //Fin del Ciclo Do  

	
}

int cargar(registro amp[50])
{
	system("cls");
	int i=0,cod;
	printf("\nIngrese el codigo del producto: ");
	scanf("%d",&cod);
       
	while(cod!=0)
	{
		amp[i].codigo=cod;
		_flushall();
		printf("\nIngrese el nombre del producto: ");
		gets(amp[i].descripcion);
		printf("\nPrecio: ");
		scanf("%f",&amp[i].precio);
		printf("\nCantidad: ");
		scanf("%d",&amp[i].cantidad);
		printf("\nFECHA DE COMPRA\n");
		printf("\nDIA: ");
		scanf("%d",&amp[i].fecha_compra.dia);
		printf("\nMES: ");
		scanf("%d",&amp[i].fecha_compra.mes);		
		printf("\nANIO: ");
		scanf("%d",&amp[i].fecha_compra.anio);
		_flushall();	
		printf("\nNombre del Proveedor: ");
		gets(amp[i].proveedor);
		printf("\nIngrese el codigo del producto: ");
		scanf("%d",&cod);
		i++;
	}
	return i;
}


void mostrar(int n, registro amp[50])
{
	int i;
	system("cls");
	printf("\nLISTADO DE PRODUCTOS...\n");
	for(i=0;i<n;i++)
	{
		printf("\nCODIGO: %d",amp[i].codigo);
		printf("\nDescripcion: ");
		puts(amp[i].descripcion);
		printf("\nPrecio: %.2f",amp[i].precio );
		printf("\nCantidad: %d", amp[i].cantidad);
		printf("\nFECHA DE COMPRA\n");
		printf("\nDIA: %d",amp[i].fecha_compra.dia);
		printf("\nMES: %d",amp[i].fecha_compra.mes);
		printf("\nANIO: %d",amp[i].fecha_compra.anio);
		printf("\nNombre del Proveedor: ");
		puts(amp[i].proveedor);
	}
	printf("\n\n");
	system("pause");
}

void consultar(int n, registro amp[50])
{
	int i,cod,bandera=0;
	printf("\nIngrese el codigo a consultar: ");
	scanf("%d",&cod);
	
	for(i=0;i<n;i++)
	{
		if(cod==amp[i].codigo)
		{
			printf("\nCODIGO: %d",amp[i].codigo);
			printf("\nDescripcion: ");
			puts(amp[i].descripcion);
			printf("\nPrecio: %.2f",amp[i].precio );
			printf("\nCantidad: %d", amp[i].cantidad);
			printf("\nFECHA DE COMPRA\n");
			printf("\nDIA: %d",amp[i].fecha_compra.dia);
			printf("\nMES: %d",amp[i].fecha_compra.mes);
			printf("\nANIO: %d",amp[i].fecha_compra.anio);
			printf("\nNombre del Proveedor: ");
			puts(amp[i].proveedor);
			i=n;
			bandera=1;
		}
		
	}
	if(bandera==0)
		printf("\nCODIGO INEXISTENTE...");
		
	printf("\n\n");
	system("pause");
}

void ordenar(int n, registro amp[50])
{
	bool bandera;
	registro auxiliar[50];
	int i, valor;
	
	do
	{
		bandera=false;
		for(i=0;i<n-1;i++)
		{
			if(strcmp(amp[i].descripcion,amp[i+1].descripcion)>0)
			{
				auxiliar[i]=amp[i];
				amp[i]=amp[i+1];
				amp[i+1]=auxiliar[i];
				bandera=true;
			}
		}
	}
	while(bandera==true);
}

int menuPrincipal()
{
    int opc=0;
    system("CLS");
    printf("\t*************************************************\n");
    printf("\t**       M E N U    P R I N C I P A L          **\n");
    printf("\t*************************************************\n");
    printf("\t**                                             **\n");
    printf("\t**     		1-> Cargar                       **\n");
    printf("\t**                                             **\n");
    printf("\t*************************************************\n");
    printf("\t**                                             **\n");
    printf("\t**     		2-> Mostrar                      **\n");
    printf("\t**                                             **\n");
    printf("\t*************************************************\n");
    printf("\t**                                             **\n");
    printf("\t**     		3-> Buscar                       **\n");        
    printf("\t**                                             **\n");
    printf("\t*************************************************\n"); 
    printf("\t**                                             **\n");
    printf("\t**     		4-> Ordenar                      **\n");    
    printf("\t**                                             **\n");
    printf("\t*************************************************\n"); 
    printf("\t**                                             **\n");
    printf("\t**     		5-> SALIR del SISTEMA            **\n");    
    printf("\t**                                             **\n");
    printf("\t*************************************************\n\n");
    printf("  Seleccione Opcion: "); 
    scanf("%d", &opc);
    return opc;  //retorna el número de opción seleccionada.
}

