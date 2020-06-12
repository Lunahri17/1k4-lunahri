#include<stdio.h>
#include<stdlib.h>


main()
{
	float prom,ei,tf,nf;
	
	printf("Ingrese su Promedio de sus parciales: ");
	scanf("%f",&prom);
	
	printf("\nIngrese la nota de su Examen Integrador: ");
	scanf("%f",&ei);
	
	printf("\nIngrese la nota de su Trabajo Final: ");
	scanf("%f",&tf);
	
	nf=(prom*0.5)+(ei*0.3)+(tf*0.2);

	printf("\nSu calificacion final es: %.2f",nf);

 	printf("\n\n");
	system("pause");
}

