include<stdio.h>

 #include<stdlib.h>

 #include<string.h>



struct fecha

 {

 int dia,mes,anio;

 };



struct producto

 {

 int codigo;

 char descripcion[25];

 float precio;

 fecha fecha_ven;

 char comentario[200];

 char rubro;

 };



main()

 {

 int i,N;



producto prod[50];

 printf("\nIngrese la cantidad de elementos: ");

 scanf("%d",&N);

 for(i=0;i<N;i++)

 {


 printf("\nCODIGO: ");

 scanf("%d",&prod[i].codigo);

 _flushall();

 printf("\nDESCRIPCION: ");

 gets(prod[i].descripcion);

 printf("\nPRECIO: ");

 scanf("%f",&prod[i].precio);

 printf("\nFECHA DE VENCIMIENTO: \n");

 printf("\nDIA: ");

 scanf("%d",&prod[i].fecha_ven.dia);

 printf("\nMES: ");

 scanf("%d",&prod[i].fecha_ven.mes);

 printf("\nANIO: ");

 scanf("%d",&prod[i].fecha_ven.anio);

 _flushall();

 printf("\nOBSERVACIONES: ");

 gets(prod[i].comentario);

 printf("RUBRO L=Lacteos - P=Panaderia: ");

 scanf("%c",&prod[i].rubro);

 }

 printf("\nLISTADO DE PRODUCTOS\n");

 for(i=0;i<N;i++)

 {

 printf("\n");

 printf("\nCODIGO: %d",prod[i].codigo);

 printf("\nDESCRIPCION: %s",strupr(prod[i].descripcion));

 printf("\nPRECIO: %.2f",prod[i].precio);

 printf("\nFECHA DE VENCIMIENTO");

 printf("\nDIA: %d",prod[i].fecha_ven.dia);

 printf("\nMES: %d",prod[i].fecha_ven.mes);

 printf("\nANIO: %d",prod[i].fecha_ven.anio);

 printf("\nOBSERVACIONES: ");

 puts(prod[i].comentario);

 printf("RUBRO: %c",prod[i].rubro);



}

 printf("\n\n");

 system("pause");

 }