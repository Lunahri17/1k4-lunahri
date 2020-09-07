#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void cargar(int m1,int n1,int p1,int a[10][10][10]);
int total(int m1,int n1,int p1,int a[10][10][10]);
void CalculoHotel(int m,int n,int p,int a[10][10][10]);

main()
{
	int n,m,p,a[10][10][10];

    printf("Ingrese la cantidad de Filas: ");
    scanf("%d",&m);

    printf("Ingrese la cantidad de Columnas: ");
    scanf("%d",&n);

    printf("Ingrese la cantidad de Planos: ");
    scanf("%d",&p);

    cargar(m,n,p,a);
    
    printf("Cantidad total de personas alojadas: %d",total(m,n,p,a));

    CalculoHotel(m,n,p,a);
	
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

int total(int m1,int n1,int p1,int a[10][10][10])
{
    int total=0;

    for (int k = 0; k < p1; k++)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                total+=a[i][j][k];
            }   
        }   
    }

    return total;
}

void CalculoHotel(int m,int n,int p,int a[10][10][10])
{
    int Acumulador,MayH=0,NumHotel=0;

    for (int k = 0; k < p; k++)
    {
        Acumulador=0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                Acumulador+=a[i][j][k];
            }
        }
        
        if (Acumulador>MayH)
        {
            MayH=Acumulador;
            NumHotel=k;
        }
    }

    printf("\n El hotel con mayor cantidad de personas alojadas es: %d",NumHotel);
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}