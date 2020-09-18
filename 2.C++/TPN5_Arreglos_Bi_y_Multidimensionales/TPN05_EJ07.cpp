#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(int Arreglo[2][4][3]);
int PaisMasVendio(int Arreglo[2][4][3]);

main()
{
	int Arreglo[2][4][3];

    printf("\nIngrese los datos: ");
    CargarArreglo(Arreglo);
	
    printf("\nEl pais que mas vendio fue el %d",PaisMasVendio(Arreglo)+1);

	end();
}

void CargarArreglo(int Arreglo[2][4][3])
{
    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("\nArreglo[%d][%d][%d]= ",i,j,k);
                scanf("%d",&Arreglo[i][j][k]);
            }
        }
    }
}

int PaisMasVendio(int Arreglo[2][4][3])
{
    int Acumulador=0,Mayor=0,Pais=0;
    
    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 2; i++)
            {
                Acumulador+=Arreglo[i][j][k];
            }
        }

        if (Acumulador>Mayor)
        {
            Mayor=Acumulador;
            Pais=k;
        }
    }

    return Pais;
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}