#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Protipos de funciones:
void end();

struct producto
{
    int codigo;
    char descripcion[25];
    float precio;
    int fecha_vencimiento;
};


main()
{
    int N;

    producto prod;

    //printf("\nIngrese la cantidad de elementos: ");
    //scanf("%d",&N);
	
    printf("\nCODIGO: ");
    scanf("%d",&prod.codigo);

    _flushall();

    printf("\nDESCRIPCION: ");
    gets(prod.descripcion);

    printf("\nPRECIO: ");
    scanf("%f",&prod.precio);
	
    printf("\nFECHA DE VENCIMIENTO: ");
    scanf("%d",&prod.fecha_vencimiento);

    
    printf("\n LISTADO DE PRODUCTOS\n");

    printf("\nCODIGO: %d",prod.codigo);
    
    printf("\nDESCRIPCION: ");
    puts(prod.descripcion);

    printf("\nPRECIO: %.2f",prod.precio);
    
	printf("\nFECHA DE VENCIMIENTO: %d",prod.fecha_vencimiento);
    
	end();
}



void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}