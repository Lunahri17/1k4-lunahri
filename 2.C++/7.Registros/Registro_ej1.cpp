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

    producto prod[50];

    printf("\nIngrese la cantidad de elementos: ");
    scanf("%d",&N);
	
    for (int i = 0; i < N; i++)
    {
        printf("\nCODIGO: ");
        scanf("%d",&prod[i].codigo);

        _flushall();

        printf("\nDESCRIPCION: ");
        gets(prod[i].descripcion);

        printf("\nPRECIO: ");
        scanf("%f",&prod[i].precio);
        
        printf("\nFECHA DE VENCIMIENTO: ");
        scanf("%d",&prod[i].fecha_vencimiento);
    
    }
    
    printf("\n LISTADO DE PRODUCTOS");

    for (int i = 0; i < N; i++)
    {
        printf("\n\nCODIGO: %d",prod[i].codigo);
    
        printf("\nDESCRIPCION: ");
        puts(prod[i].descripcion);

        printf("PRECIO: %.2f",prod[i].precio);
        
        printf("\nFECHA DE VENCIMIENTO: %d",prod[i].fecha_vencimiento);
        
    }
    
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