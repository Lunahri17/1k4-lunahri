void contador(int x, int valor, int &conta)
{
	if(x%valor==0)
	{
		conta++;
	}
}

float porcentaje(int contar, int total)
{
	float por=0;
	por=contar*100/total;
	return por;
}
