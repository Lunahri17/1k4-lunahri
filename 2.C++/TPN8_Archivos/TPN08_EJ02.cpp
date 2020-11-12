#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctime>

//Protipos de funciones:
void Aleatorios(FILE *arch);
void ParesImpares(FILE *arch,int &cont_par,int &ont_impar);
void Listar(FILE *arch);
void Agregar(FILE *arch);
bool Buscar(FILE *arch);
void Rangos(FILE *arch,int &cont1,int &cont2);
bool es_entero(float aux);

main()
{
	FILE *arch;
    int opcion,i=0,cont_par=0,cont_impar=0,cont1=0,cont2=0;
    
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
                ParesImpares(arch,cont_par,cont_impar);
                
                printf("\nLa cantidad de numeros pares es: %d",cont_par);
                printf("\nLa cantidad de numeros impares es: %d",cont_impar);
                break;
            
            case 2:
                Listar(arch);
                break;
            
            case 3:
                Agregar(arch);
                break;
            
            case 4:
                if (Buscar(arch))
                {
                    printf("\nEl numero se encuentra dentro del archivo.");
                }
                else
                {
                    printf("\nEl numero no se encuentra dentro del archivo.");
                }
                break;
            
            case 5:
                Rangos(arch,cont1,cont2);
                
                printf("\nCantidad de nuemros en el intervarlo [125-500]: %d",cont1);
                printf("\nCantidad de nuemros en el intervarlo (500-789]: %d",cont2);
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

void ParesImpares(FILE *arch,int &cont_par,int &cont_impar)
{
    arch=fopen("numeros.dat","rb");
    
    int aux;
    cont_par=0;
    cont_impar=0;

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

        if (i==20)
        {
            printf("-\n");
            i=0;
        }
        
        fread(&aux,sizeof(int),1,arch);
    }
    fclose(arch);
}

bool Buscar(FILE *arch)
{
    arch=fopen("numeros.dat","rb");
    int aux,buscado;
    bool esta=false;

    printf("\nIngrese el numero que desea buscar: ");
    scanf("%d",&buscado);

    fread(&aux,sizeof(int),1,arch);

    while (!feof(arch))
    {
        if (aux==buscado)
        {
            esta=true;
            break;
        }
        fread(&aux,sizeof(int),1,arch);
    }
    fclose(arch);
    
    return esta;
}

void Rangos(FILE *arch,int &cont1,int &cont2)
{
    arch=fopen("numeros.dat","rb");
    int aux;
    cont1=0;
    cont2=0;

    fread(&aux,sizeof(int),1,arch);

    while (!feof(arch))
    {
        if (aux>124 and aux<501)
        {
            cont1++;
        }
        else
        {
            cont2++;
        }
        
        fread(&aux,sizeof(int),1,arch);
    }
    fclose(arch);
}

void Agregar(FILE *arch)
{
    arch=fopen("numeros.dat","a+b");
    float aux;
    bool es;
    int aux2;

    printf("\nIngrese el numero a agregar (0: Salir): ");
    scanf("%f",&aux);

    es=es_entero(aux);

    if (es)
    {
        aux2=aux;
        while (aux2!=0)
        {
            fwrite(&aux2,sizeof(int),1,arch);
            
            printf("\nIngrese el numero a agregar (0: Salir): ");
            scanf("%d",&aux2);
        }
    }
    else
    {
        printf("\nIngreso un numero que no es entero.");
    }
    fclose(arch);
}

bool es_entero(float aux)
{
    int aux2=aux;
    float aux3;

    aux3=aux-aux2;

    if (aux3==0)
    {
        return true;
    }
    else
    {
        return false;
    }    
}