#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctime>

//Estructuras:


//Protipos de funciones:
void Aleatorios(FILE *arch);

main() 
{
	FILE *arch;
    int opcion,i=0;
    
    srand(time(0));
    Aleatorios(arch);

    do
    {
        system("cls");
        printf("\n\tMenu:");
        printf("\n\n1. Cantidad de valores pares e impares.");
        printf("\n\n2. Lista.");
        printf("\n\n3. Agragar datos.");
        printf("\n\n4. Buscar un dato en el archivo.");
        printf("\n\n5. Valores entre el rango [125-500] y (500-789].");
        printf("\n\n6. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                
                break;
            
            case 2:
                if (i>0) {
                    
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;
            
            case 3:
                if (i>0) {
                    
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;
            
            case 4:
                if (i>0) {
                    
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;
            
            case 5:
                if (i>0) {
                    
                }
                else {
                    printf("\nNo se ingresaron datos.");
                }
                break;

            case 6:
                printf("\nGracias por utilizar nuestros servicios.");
                break;
            
            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.");
                break;
        }

        printf("\n\n");
        system("pause");
    } 
    while (opcion!=6);

}

void Aleatorios(FILE *arch)
{
    fopen("numeros.dat","a+b");
    int nro_azar,cont=0;

    while (!feof(arch)){
        cont++;
    }
    
    if (cont<276)
    {
        for (int i = 0; i < 276; i++)
        {
            nro_azar=125+(rand()%665);
            fwrite(&nro_azar,sizeof(int),1,arch);
        }   
    }
}


