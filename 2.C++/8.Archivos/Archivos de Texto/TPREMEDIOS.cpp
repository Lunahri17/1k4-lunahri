#include <stdio.h>
#include <string.h>


main ()
{
    FILE *fp;
    int i,n;
    char medi[100];
    
    printf("Ingrese la cantidad de medicamentos a ingresar: ");
    scanf("%d", &n);
    
    fp=fopen("medicamentos.txt","w");
    
    
    for (i=0;i<n;i++)
    {
    	_flushall();
        gets(medi);
        
        if (i<n-1)
           fprintf(fp, strcat(medi,"\n"));
        else
           fprintf(fp,medi);
    }
    
    fclose(fp);
    
    printf("\nLOS NOMBRES DE MEDICAMENTOS INGRESADOS SON:\n");
    fp = fopen("medicamentos.txt", "r");   

    
    while (!feof(fp)) /* Hasta encontrar NULL */
    {
              fgets(medi,100,fp);
              if (medi[0]=='A' || medi[0]=='a')
                 printf("%s",medi); // La  despliega en pantalla 
    }
   
    fclose(fp);
}
