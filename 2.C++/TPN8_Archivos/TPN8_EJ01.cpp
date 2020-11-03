#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:


//Protipos de funciones:
void CargarMontos(FILE *archivo,int &i);


main() {
    FILE *archivo;
	int opcion,i=0;
    
    archivo=fopen("Montos.dat","w+b");

    do
    {
        system("cls");
        printf("\n\tSistema de carga de ventas totales");
        printf("\n\n1. Registrar montos totales de la venta.");
        printf("\n\n2. Mayor venta guardada y veces que aparece.");
        printf("\n\n3. Lista.");
        printf("\n\n4. Monto total de ventas.");
        printf("\n\n5. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                CargarMontos(archivo,i);
                break;
            
            case 2:
                
                break;
            
            case 3:
                
                break;
            
            case 4:
                
                break;

            case 5:
                printf("\nGracias por utilizar nuestros servicios.");
                break;
            
            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.");
                break;
        }

        printf("\n\n");
        system("pause");
    } 
    while (opcion!=5);
    fclose(archivo);
}

void CargarMontos(FILE *archivo,int &i) {
    int n;

    printf("\nIngrese el monto total %d (Ingrese 0 para salir): ",i+1);
    scanf("%d",&n);

    while (n!=0)
    {
        fwrite(&n,sizeof(n),1,archivo);

        printf("\nIngrese el monto total %d (Ingrese 0 para salir): ",i+1);
        scanf("%d",&n);
    }
}
