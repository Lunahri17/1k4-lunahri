//Función (1): Retorna el mayor de 3 numeros.
int mayor(int x1,int x2,int x3)
{
    if (x1>x2 and x1>x3)
    {
        return x1;
    }
    if(x2>x1 and x2>x3)
    {
        return x2;
    }
    else
    {
        return x3;
    } 
}

//Funcion (2): Retorna el menor de 3 numeros.
int menor(int x1,int x2,int x3)
{
    if (x1<x2 and x1<x3)
    {
        return x1;
    }
    if(x2<x1 and x2<x3)
    {
        return x2;
    }
    else
    {
        return x3;
    } 
}