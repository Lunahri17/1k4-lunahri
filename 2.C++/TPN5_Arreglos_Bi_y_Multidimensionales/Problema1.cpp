#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void IngresarElementos(float Matriz[10][10]);
float MayorMenor(float Matriz[10][10],float &Menor);
void MostrarMatriz(float Matriz[10][10]);

main()
{
	float Matriz[10][10],Menor=0,Mayor=0;

    IngresarElementos(Matriz);

    Mayor=MayorMenor(Matriz,Menor);

    printf("\nEl mayor elemento de la matriz es: %.2f",Mayor);
    printf("\nEl menor elemento de la matriz es: %.2f",Menor);

    MostrarMatriz(Matriz);
	
	end();
}

void IngresarElementos(float Matriz[10][10])
{
    printf("\n Ingrese los elementos de la Matriz 4x3:");

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("\nMatriz[%d][%d]= ",i,j);
            scanf("%f",&Matriz[i][j]);
        }
    }

    system("cls");
}

float MayorMenor(float Matriz[10][10],float &Menor)
{
    float Mayor=Matriz[0][0];
    
    Menor=Matriz[0][0];

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (Matriz[i][j]<Menor)
            {
                Menor=Matriz[i][j];
            }
            
            if (Matriz[i][j]>Mayor)
            {
                Mayor=Matriz[i][j];
            }
        }
    }

    return Mayor;
}

void MostrarMatriz(float Matriz[10][10])
{
    printf("\n\nLa matriz ingresada es: \n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n\n");

        for (int j = 0; j < 3; j++)
        {
            printf(" %.2f",Matriz[i][j]);

            if (j<2)
            {
                printf(" - ");
            }
        }
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