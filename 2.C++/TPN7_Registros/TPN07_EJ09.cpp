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
void Eliminar(int n,Articulos art[40],int nro);
void Listar(int n,Articulos art[40],Articulos decreciente[40]);
void ListarStock(int n,Articulos art[40],Articulos decreciente[40]);

main()
{
	Articulos art[40],decreciente[40];
    int n;

    printf("\nIngrese la cantidad de articulo que ingresara: ");
    scanf("%d",&n);

    CargarArticulos(n,art);

    EliminarArticulo(n,art);
    system("pause");
	
    Listar(n,art,decreciente);
    system("pause");

    ListarStock(n,art,decreciente);
    system("pause");

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
    bool esta=false;
    int aux,nro,opcion;
    
    do
    {
        system("cls");
        printf("\nIngrese el codigo del articulo que desee buscar: ");
        scanf("%d",&aux);

        for (int i = 0; i < n; i++)
        {
            if (art[i].codigo==aux)
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
                n--; //Esta corrección no esta en lo presentado.
                printf("\nEl articulo se elimino con exito.");
            }

            printf("\n\n");
        }
        else
        {
            printf("\nEl codigo ingresado no se encuentra en la lista.\n\n");
            system("pause");
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

void Eliminar(int n,Articulos art[40],int nro)
{
    int i=nro;

    while (i<n)
    {
        art[i]=art[i+1];
        i++;
    }
}

void Listar(int n,Articulos art[40],Articulos decreciente[40])
{
    bool stop;
    Articulos aux;

    system("cls");

    printf("\nListado por descripcion decreciente:\n");

    for (int i = 0; i < n; i++)
    {
        decreciente[i]=art[i];
    }
    
    do
    {
        stop=false;
        
        for (int i=0 ; i < n-1 ; i++)
        {
            if(strcmp(decreciente[i].descripcion,decreciente[i+1].descripcion)<0)
            {
                aux=decreciente[i];
                decreciente[i]=decreciente[i+1];
                decreciente[i+1]=aux;
                stop=true;
            }
        }
    }
    while (stop);

    for (int k = 0; k < n; k++)
    {
        printf("\nCodigo %d.",decreciente[k].codigo);
        printf("\nDescripcion: ");
        puts(decreciente[k].descripcion);
        printf("\nCantidad en stock: %d.",decreciente[k].stock);
        printf("\nPrecio: %.2f",decreciente[k].precio);
    }
    printf("\n\n");
}

void ListarStock(int n,Articulos art[40],Articulos decreciente[40])
{
    bool stop;
    Articulos aux;

    system("cls");
    
    printf("\nListado por numero de codigo creciente:\n");

    for (int i = 0; i < n; i++)
    {
        decreciente[i]=art[i];
    }
    
    do
    {
        stop=false;
        
        for (int i=0 ; i < n-1 ; i++)
        {
            if(decreciente[i].codigo>decreciente[i+1].codigo)
            {
                aux=decreciente[i];
                decreciente[i]=decreciente[i+1];
                decreciente[i+1]=aux;
                stop=true;
            }
        }
    }
    while (stop);

    for (int k = 0; k < n; k++)
    {
        printf("\nCodigo %d.",decreciente[k].codigo);
        printf("\nDescripcion: ");
        puts(decreciente[k].descripcion);
        printf("\nCantidad en stock: %d.",decreciente[k].stock);
        printf("\nPrecio: %.2f",decreciente[k].precio);
    }

    printf("\n\n");
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}