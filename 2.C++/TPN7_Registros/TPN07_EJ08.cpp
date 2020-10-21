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
    int precio;
};


//Protipos de funciones:
void end();
int IngresarProductos(Productos pro[40]);
bool CantDigitos(int num);

main()
{
	Productos pro[40];
    int i;

    i=IngresarProductos(pro);
	
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
        scanf("%d",&pro[i].precio);

        i++;
        
        if (i>9)
        {
            printf("\nDesea ingresar otro empleado? (1: Si / 0: No): ");
            scanf("%d",&stop);
        }
             
    } while (stop!=0);
    
    return i;    
}

bool CantDigitos(int num)
{
    int cont=1;

    while (num/10>0)
    {
        num=num/10;
        cont++;
    }
    
    if (num>5)
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