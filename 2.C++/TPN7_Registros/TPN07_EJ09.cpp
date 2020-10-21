#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Articulos
{
    int codigo;
    char descripcion[40];
    int stock;
    float precio;
};


//Protipos de funciones:
void end();
void CargarArticulos(int n,Articulos art[40]);
void EliminarArticulo(int n,Articulos art[40]);
void MostrarUnDato(int x,Articulos art[40]);

main()
{
	Articulos art[40];
    int n;

    printf("\nIngrese la cantidad de articulo que ingresara: ");
    scanf("%d",&n);

    CargarArticulos(n,art);

    EliminarArticulo(n,art);
	
	end();
}

void CargarArticulos(int n,Articulos art[40])
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

void EliminarArticulo(int n,Articulos art[40])
{
    bool esta=false
    int aux,nro;
    
    do
    {
        system("cls");
        printf("\nIngrese el codigo del articulo que desee buscar: ");
        scanf("%d",&aux1);

        for (int i = 0; i < n; i++)
        {
            if (art[i].codigo==aux1)
            {
                esta=true;
                nro=i;
                break;
            }
        }

        if (esta)
        {
            MostrarUnDato(nro,art);

            printf("\nDesea eliminar el articulo? (1:Si | 0:No): ");
            scanf("%d",&opcion);

            if (opcion==1)
            {
                Eliminar(n,art,nro);
                MostrarUnDato(nro,art); //caso de prueba.
            }
            
        }
        else
        {
            printf("\nEl codigo ingresado no se encuentra en la lista.");
        }
    } while (esta==false);
    
}

void MostrarUnDato(int x,Articulos art[40])
{
    printf("\nCodigo %d.",art[x].codigo);
    printf("\nDescripcion: ");
    puts(art[x].descripcion);
    printf("\nCantidad en stock: %d.",art[x].stock);
    printf("\nPrecio: %.2f",art[x].precio);
}

void Eliminar(n,art,nro)
{
    int i=nro;

    while (i<n)
    {
        art[i]=art[i+1];
        i++;
    }

    /*
    for (int i = 0; i < n; i++)
    {
        if (i==nro)
        {
            while (i<n)
            {
                art[i]=art[i+1];
                i++;
            }
            
        }
        
    }
    */
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}