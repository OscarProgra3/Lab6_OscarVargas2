#include "Binario.h"

Binario::Binario()
{
	arreglo=new int[4];
	llenarArreglo(arreglo);
}




Binario::Binario(int* parreglo)
{
	arreglo=parreglo;
}


int* Binario::getArreglo()
{
	for (int i = 0; i < 4; ++i)
	{
		cout<<arreglo[i]<<endl;
	}

	return arreglo;

}

int* Binario::setArreglo(int* tarray)
{
	arreglo=tarray;
}


void Binario::llenarArreglo(int* tarr)
{
	

	for (int i = 0; i < 4; ++i)
	{
		tarr[i]=rand() % 2 ;
	}

}


Binario* Binario::operator+(Binario* tarreglo)//disyuncion
{

	Binario* retorno;
	int* suma=new int[4];
	int* ar2=tarreglo->getArreglo();

	for (int i = 0; i < 4; ++i)
	{
		if (arreglo[i]==1 && ar2[i]==1)
		{
			suma[i]=1;
		}else
		{
			suma[i]=0;
		}
	}

	retorno->setArreglo(suma);

	return retorno;

}


Binario* Binario::operator-(Binario* tarreglo)//conjuncion
{


	Binario* retorno;
	int* suma=new int[4];
	int* ar2=tarreglo->getArreglo();

	for (int i = 0; i < 4; ++i)
	{
		if (arreglo[i]==0 && ar2[i]==0)
		{
			suma[i]=0;
		}else
		{
			suma[i]=1;
		}
	}

	retorno->setArreglo(suma);

	return retorno;

}


Binario* Binario::operator*(Binario* tarreglo)//implicacion
{
	Binario* retorno;
	int* suma=new int[4];
	int* ar2=tarreglo->getArreglo();

	for (int i = 0; i < 4; ++i)
	{
		if (arreglo[i]==0 && ar2[i]==1)
		{
			suma[i]=1;
		}else
		{
			suma[i]=0;
		}
	}

	retorno->setArreglo(suma);

	return retorno;
}


Binario* Binario::operator/(Binario* tarreglo)//dobleimplicacion
{
		Binario* retorno;
	int* suma=new int[4];
	int* ar2=tarreglo->getArreglo();

	for (int i = 0; i < 4; ++i)
	{
		if (arreglo[i] == ar2[i])
		{
			suma[i]=0;
		}else
		{
			suma[i]=1;
		}
	}

	retorno->setArreglo(suma);

	return retorno;
}


Binario* Binario::operator^(Binario* tarreglo)//disyuncionexclusiva
{
		Binario* retorno;
	int* suma=new int[4];
	int* ar2=tarreglo->getArreglo();

	for (int i = 0; i < 4; ++i)
	{
		if (arreglo[i]== ar2[i])
		{
			suma[i]=1;
		}else
		{
			suma[i]=0;
		}
	}

	retorno->setArreglo(suma);

	return retorno;
}
