#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Estructuras:
struct fecha
{
       int dia,mes,year;
};

struct registro
{
       int   cod_pac;
       char  apellido[30],nombre[50];
       fecha fec_nac;
       char resultado;
};

//Protipos de funciones:
void end();
void IngresarDatos(registro reg,int n,int &cp60,int &PasientePositivo);
int calculo(fecha fec);

main ()
{
    registro reg;
    int n,cp60=0,PasientePositivo=0;
     
    printf("Ingrese cantidad de pacientes: ");
    scanf("%d",&n);
    
    IngresarDatos(reg,n,cp60,PasientePositivo);

    printf("\n\nCANTIDAD MAYORES DE 60: %d",cp60);

    printf("\nEl porcentaje de pasientes positivos es: %.2f % ",Porcentaje(n,PasientePositivo));

    end();
}

void IngresarDatos(registro reg,int n,int &cp60,int &PasientePositivo)
{
    printf("\nIngrese los datos del registro\n\n");
    for (int i=0 ; i < n ; i++)
	{	     
        printf("\nCodigo Paciente: ");
        scanf("%d",&reg.cod_pac);

        printf("Apellido: ");
        _flushall();
        gets(reg.apellido);
        
        printf("Nombre: ");
        _flushall();
        gets(reg.nombre);
        
        printf("\nFecha de Nacimiento: \n");
        printf("Dia: ");
        scanf("%d",&reg.fec_nac.dia);
        printf("Mes: ");
        scanf("%d",&reg.fec_nac.mes);
        printf("Año: ");
        scanf("%d",&reg.fec_nac.year);
        
        printf("Resultado test (P: positivo / N: Negativo): ");
        _flushall();
        scanf("%c",&reg.resultado);
        strupr(reg.resultado);
	      
	    if (calculo(reg.fec_nac)>60)
	        {
              cp60++;
            }
        
        if (reg.resultado=="P")
        {
            PasientePositivo++;
        }
        
	}
}

int calculo(fecha fec)
{
	return 2020-fec.year;
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}