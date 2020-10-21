#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Fecha
{
    int dia;
    int mes;
    int year;
};

struct Productos
{
    int codigo;
    char articulo[40];
    int cantMin;
    Fecha compra;
    int stock;
    float precio;
};


//Protipos de funciones:
void end();
int IngresarProductos(Productos pro[40]);
bool CantDigitos(int num);
void ActualizarCompra(int i,Productos pro[40]);

main()
{
	Productos pro[40];
    int i;

    i=IngresarProductos(pro);

    ActualizarCompra(i,pro);

    Venta(i,pro);

	end();
}

int IngresarProductos(Productos pro[40])
{
    int stop=1,i=0;

    printf("\nIngrese al menos 10 productos");
    
    do
    {
        printf("\n\n------------------------------------------------------------------------------\n");

        do
        {
            printf("\nIngrese el codigo del producto %d: ",i+1);
            scanf("%d",&pro[i].codigo);

            if (CantDigitos(pro[i].codigo)==false)
            {
                printf("\nIngreso un numero de mas de 5 cifras. Vuelva a intentarlo.");
            }
        } while (CantDigitos(pro[i].codigo)==false);
        
        printf("\nIngrese el nombre del producto %d: ",i+1);
        _flushall();
        gets(pro[i].articulo);

        printf("\nIngrese el stock minimo del producto %d: ",i+1);
        scanf("%d",&pro[i].cantMin);        
        
        printf("\nIngrese la fecha de la ultima compra: ");
        printf("\nDia: ");
        scanf("%d",&pro[i].compra.dia);
        printf("\nMes: ");
        scanf("%d",&pro[i].compra.mes);
        printf("\nAnio: ");
        scanf("%d",&pro[i].compra.year);
        
        printf("\nIngrese el stock del producto %d: ",i+1);
        scanf("%d",&pro[i].stock);

        printf("\nIngrese el precio final del producto %d: ",i+1);
        scanf("%f",&pro[i].precio);

        i++;
        
        if (i>1) //cambiar a 9!!!!!!!!!!!
        {
            printf("\n\n------------------------------------------------------------------------------\n");
            printf("\nDesea ingresar otro empleado? (1: Si / 0: No): ");
            scanf("%d",&stop);
        }
             
    } while (stop!=0);
    
    return i;    
}

void ActualizarCompra(int i,Productos pro[40])
{
    bool esta=false;
    int buscar,nro,aux;
    
    do
    {
        system("cls");

        printf("\n\nIngrese el codigo del producto a buscar: ");
        scanf("%d",&buscar);

        for (int k = 0; k < i; k++)
        {
            if (pro[k].codigo==buscar)
            {
                esta=true;
                nro=k;
            }  
        }

        if (esta)
        {
            printf("\nProducto %d Solicitado: ",nro+1);
            puts(pro[nro].articulo);            
            
            printf("\nIngrese la nueva fecha de compra: ");
            printf("\nDia: ");
            scanf("%d",&pro[nro].compra.dia);
            printf("\nMes: ");
            scanf("%d",&pro[nro].compra.mes);
            printf("\nAnio: ");
            scanf("%d",&pro[nro].compra.year);

            printf("\nIngrese la cantidad de la nueva compra: ");
            scanf("%d",&aux);
            pro[nro].stock+=aux;
        }
        else
        {
            printf("\nEl producto ingresado no se encuntra en la lista.\n");
            system("pause");
        }
    } while (esta==false);
}

void Venta(int i,Productos pro[40])
{
    bool esta=false;
    int buscar,nro,aux;
    float aux2;
    
    do
    {
        system("cls");

        printf("\n\nIngrese el codigo del producto a buscar: ");
        scanf("%d",&buscar);

        for (int k = 0; k < i; k++)
        {
            if (pro[k].codigo==buscar)
            {
                esta=true;
                nro=k;
            }  
        }

        if (esta)
        {
            do
            {
                esta=true;

                printf("\n  Codigo  |    Descripcion    |  Precio/Unitario  |  Cantidad Solicitada  |  Monto a pagar |");
                printf("\n============================================================================================");
                printf("\n %5d  |  %40s  |  %6.2f  |  ",pro[nro].codigo,pro[nro].articulo,pro[nro].precio);

                scanf("%d",&aux);

                if (aux>pro[nro].stock)
                {
                    printf("\n\nLa cantidad ingresada supera al de stock. Stock del producto: %d",pro[nro].stock);
                    esta=false;
                }
                else
                {
                    system("cls");

                    printf("\n  Codigo  |            Descripcion            |  Precio/Unitario  |  Cantidad Solicitada  |  Monto a pagar |");
                    printf("\n============================================================================================================");
                    printf("\n  %6d  |  %31s  |  %13.2f  |  %6d  |  %6.2f  |", pro[nro].codigo , pro[nro].articulo , pro[nro].precio ,aux,aux2);
                }
                
            } while (esta==false);
            
        }
        else
        {
            printf("\nEl producto ingresado no se encuntra en la lista.\n");
            system("pause");
        }
    } while (esta==false); 
}

bool CantDigitos(int num)
{
    int cont=0;

    while (num>0)
    {
        num=num/10;
        cont++;
    }
    
    if (cont>5)
    {
        return false;
    }
    else
    {
        return true;
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