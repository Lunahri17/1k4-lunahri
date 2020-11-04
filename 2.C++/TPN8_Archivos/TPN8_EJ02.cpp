#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctime>

//Protipos de funciones:
void Aleatorios(FILE *arch);
void ParesImpares(FILE *arch);
void Listar(FILE *arch);

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
                ParesImpares(arch);
                break;
            
            case 2:
                Listar(arch)
                break;
            
            case 3:

                break;
            
            case 4:
                
                break;
            
            case 5:
                
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
    arch=fopen("numeros.dat","rb");
    int nro_azar,cont=0;

    if (arch == NULL)
    {
        fclose(arch);
        arch=fopen("numeros.dat","w+b");

        for (int i = 0; i < 276; i++)
        {
            nro_azar=125+(rand()%665);
            fwrite(&nro_azar,sizeof(int),1,arch);
        }
    }

    fclose(arch);
}

void ParesImpares(FILE *arch)
{
    arch=fopen("numeros.dat","rb");

    int aux,cont_par=0,cont_impar=0;

    fread(&aux,sizeof(int),1,arch);

    while (!feof(arch))
    {
        if (aux%2==0)
        {
            cont_par++;
        }
        else
        {
            cont_impar++;
        }
        
        fread(&aux,sizeof(int),1,arch);
    }
    fclose(arch);
    
    printf("\nLa cantidad de numeros pares es: %d",cont_par);
    printf("\nLa cantidad de numeros impares es: %d",cont_impar);
}

void Listar(FILE *arch)
{
    arch=fopen("numeros.dat","rb");
    int aux,i=0;

    printf("\nListado de numeros:\n");

    fread(&aux,sizeof(int),1,arch);
    
    while (!feof(arch))
    {
        printf("- %d",aux);
        i++;

        if (i==10)
        {
            printf("-\n");
            i=0;
        }
        
        fread(&aux,sizeof(int),1,arch);
    }
    fclose(arch);
}




