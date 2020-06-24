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

//Función (2): Retorna el menor de 3 numeros.
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

//Función (3): Retorna el promedio de 3 numeros.
float promedio(int x1,int x2,int x3)
{
    float prom=0;
    prom=(float)(x1+x2+x3)/3
    return prom;
}

//Función (4): Retorna el resultado del producto de 2 numeros.
int producto(int x1,int x2)
{
    int prod;
    prod=x1*x2;
    return prod;
}

//Función (5): Retorna el resultado de la divición de dos numeros.
float divicion(int x1,int x2)
{
    float div;
    div=(float)x1/x2;
    return div;
}

