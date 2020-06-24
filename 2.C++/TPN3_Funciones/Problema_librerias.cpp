#include<stdio.h>
#include<stdlib.h>
#include<libreria1.h>



main()
{   
    int n1,n2,n3;

    printf("\nIngrese el primer numero: ");
    scanf("%d",n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",n3);

    printf("\n\tResultados:");

    printf("\nEl numero mayor es: %d",mayor(n1,n2,n3));
    printf("\nEl numero menor es: %d",menor(n1,n2,n3));
    printf("\nEl promedio de los valores es: %.2f",promedio(n1,n2,n3));
    printf("\nLa suma del primer valor ingresado con el ultimo es: %d",suma(n1,n3));
    printf("\nLa resta del mayor, con el menor valor es: %d",resta(mayor(n1,n2,n3),menor(n1,n2,n3)));
    printf("\n");
    
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}
