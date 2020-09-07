#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void cargar(int m1,int n1,int p1,int a[10][10][10]);

//Variables globales:


main()
{
	int n,m,p;

    printf("Ingrese la cantidad de Filas: ");
    scanf("%d",&m);

    printf("Ingrese la cantidad de Columnas: ");
    scanf("%d",&n);

    printf("Ingrese la cantidad de Planos: ");
    scanf("%d",&p);

    cargar(m,n,p,a)
	
	end();
}

void cargar(int m1,int n1,int p1,int a[10][10][10])
{
    for (int k = 0; k < p1; k++)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("A[%d][%d][%d]= ",i,j,k);
                scanf("%d",&a[i][j][k]);
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