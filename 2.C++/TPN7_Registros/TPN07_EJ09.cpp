#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Articulos
{
    int codigo
    char descripcion[40];
    int stock;
    float precio;
};


//Protipos de funciones:
void end();
void CargarArticulos(int n,Articulo art[40]);

main()
{
	Articulos art[40];
    int n;

    printf("\nInrese la cantidad de articulo que ingresara: ");
    scanf("%d",&n);

    CargarArticulos(n,art);
	
	end();
}

void CargarArticulos(int n,Articulo art[40])
{
    for (int i = 0; i < n; i++)
    {
        system("cls");

        printf("\nIngrese el codigo del articulo %d: ",i+1);
        scanf("%d",&art[i].codigo);

        printf("\nIngrese la descripcion del articulo %d: ",i+1);
        _flushall();
        gets(art[i].descripcion);
        
        printf("\nIngrese el stock del articulo %d: ",i+1);
        scanf("%d",&art[i].stock);

        printf("\nIngrese el precio del articulo %d: ",i+1);
        scanf("%f",&art[i].precio);
    }
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}