#include <vector>
#include <string>
//#include <stdlibo.h>
#include <stdlib.h>

#include <iostream>
#include <ostream>
#include <vector>


#pragma once

using namespace std;

class Binario
{
	private:
		int* arreglo;


	public:
		Binario();
		Binario(int*);



		int* getArreglo();
		int* setArreglo(int*);

		void llenarArreglo(int*);

		Binario* operator+(Binario*);//disyuncion
		Binario* operator-(Binario*);//conjuncion
		Binario* operator*(Binario*);//implicacion
		Binario* operator/(Binario*);//dobleimplicacion
		Binario* operator^(Binario*);//disyuncionexclusiva


		//~Binario();
		

		//	srand(time(NULL));

};
