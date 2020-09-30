#include <stdio.h>
#include <conio.h>
#include <string.h>

main ()
{   
    char medicamento[30], buscar[30];
    int pos;
    
    printf("\n\nIngrese Medicamento:");
    gets(medicamento);
    
    printf("\n\nBuscar:");
    gets(buscar);    
    
    pos=strstr(medicamento,buscar)-medicamento;
    if (pos>=0) 
        printf("esta");
    else
        printf("no esta");
    
}
