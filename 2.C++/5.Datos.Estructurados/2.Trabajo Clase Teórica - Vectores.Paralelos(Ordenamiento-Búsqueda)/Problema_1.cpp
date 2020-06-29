#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void leer(int n1,float pro1[50],int leg1[50]);
void ordenar(int n1,float pro1[50],int leg1[50]);
void mostrar(int n1,float pro1[50],int leg1[50]);
int buscar(int n1,int leg[50],int lega1);

main(void)
{
    int n,i,leg[50],lega,esta;
    float pro[50];
    
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&n);
    
    leer(n,pro,leg);
    ordenar(n,pro,leg);
    mostrar(n,pro,leg);
    
    printf("\n\tVectores ordenados: ");
    mostrar(n,pro,leg);
    
    printf("\n pro[0]= %.2f - leg[0]= %d",pro[0],leg[0]);
    printf("\n pro[1]= %.2f - leg[1]= %d",pro[1],leg[1]);
    printf("\n pro[2]= %.2f - leg[2]= %d",pro[2],leg[2]);
    
    printf("\nIngrese legajo a buscar: ");
    scanf("%d",&lega);
    esta=buscar(n,leg,lega);
    //0 si no esta, 1 si esta
    if(esta==0)
    {
        printf("\nEl legajo %d No esta",lega);
    }
    else
    {
        printf("\nEl legajo %d Si esta",lega);
    }
    
 
}

void leer(int n1,float pro1[50],int leg1[50])
{
    int i;
    
    for(i=0;i<n1;i++)
    {
        printf("\n pro[%d]= ",i);
        scanf("%f",&pro1[i]);
        
        printf("\n leg[%d]= ",i);
        scanf("%d",&leg1[i]);
    }
}

void ordenar (int n1,float pro1[50],int leg1[50])
{
    int i,aux,aux1,b;
    
    do
    {
        b=0;
        //vector ordenado
        for(i=0;i<n1-1;i++)
        {
            if(pro1[i]<pro1[i+1])
            {
                aux=pro1[i];
                pro1[i]=pro1[i+1];
                pro1[i+1]=aux;
                
                aux1=leg1[i];
                leg1[i]=leg1[i+1];
                leg1[i+1]=aux1;
                
                b=1;
                //Vector ordenado
            }
        }
    }
    while(b==1);
}

void mostrar(int n1,float pro1[50],int leg1[50])
{
    int i;
    
    for(i=0;i<n1;i++)
    {
        printf("\n pro[%d]= %.2f",i,pro1[i]);
        printf("\n leg[%d]= %d",i,leg1[i]);
    }
}

int buscar(int n1,int leg1[50],int lega1)
{
    //Busqueda secuencial
    int i,esta1=0;
    
    for(i=0;i<n1 and esta1==0;i++)
    {
        if(lega1==leg1[i])
        {
            esta1=1;
        }
    }
    return esta1;
}
