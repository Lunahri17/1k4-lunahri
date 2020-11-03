#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:


//Protipos de funciones:
void CargarMontos(FILE *archivo,int &i);
void MayorMonto(FILE *archivo);
void ListarMontos(FILE *archivo);
void MontoTotal(FILE *archivo);
void Eliminar();

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
                if (i>0) {
                    MayorMonto(archivo);
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;
            
            case 3:
                if (i>0) {
                    ListarMontos(archivo);
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;
            
            case 4:
                if (i>0) {
                    MontoTotal(archivo);
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;

            case 5:
                fclose(archivo);
                if (i>0) {
                    Eliminar();
                }

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
}

void CargarMontos(FILE *archivo,int &i) {
    float n;

    printf("\nIngrese el monto total %d (Ingrese 0 para salir): ",i+1);
    scanf("%f",&n);

    while (n!=0)
    {
        fwrite(&n,sizeof(n),1,archivo);

        i++;

        printf("\nIngrese el monto total %d (Ingrese 0 para salir): ",i+1);
        scanf("%f",&n);
    }
}

void MayorMonto(FILE *archivo) {
    float monto,mayor;
    int cont=0;

    rewind(archivo);

    fread(&monto,sizeof(float),1,archivo);
    
    mayor=monto;

    while (!feof(archivo))
    {
        if (monto>=mayor)
        {
            mayor=monto;
            cont++;
        }
        
        fread(&monto,sizeof(float),1,archivo);
    }

    printf("\nLa mayor venta registrada fue de %.2f, y se repito %d veces.",mayor,cont);
}

void ListarMontos(FILE *archivo) {
    float monto;
    int i=0;

    rewind(archivo);

    printf("Montos almacenados:\n");
    
    fread(&monto,sizeof(float),1,archivo);
    
    while (!feof(archivo))
    {
        printf("- %06.2f ",monto);

        i++;

        if (i==10) {
            printf("-");
            printf("\n");
            i=0;
        }
        
        fread(&monto,sizeof(float),1,archivo);
    }
}

void MontoTotal(FILE *archivo) {
    float monto,acumulador;

    rewind(archivo);

    fread(&monto,sizeof(float),1,archivo);

    while (!feof(archivo))
    {
        acumulador+=monto;
        
        fread(&monto,sizeof(float),1,archivo);
    }

    printf("\nEl monto total es: %.2f",acumulador);
}

void Eliminar() {
    int opcion;

    printf("\nDesea eliminar el Archivo? (1: Si / 0: No); ");
    scanf("%d",&opcion);

    if (opcion==1){
        remove("Montos.dat");
    }
}

