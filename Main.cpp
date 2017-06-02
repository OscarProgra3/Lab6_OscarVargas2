#include "Binario.h"
#include <vector>
#include <string>

using namespace std;

void listarvariables(vector <Binario*> tlista);

int main()
{
	srand(time(NULL));
	
	vector<Binario*> listavariables; 

	cout<<endl<<"BIENVENIDO \npara comenzar a utilizar este programa primero se deben crear variables";
	int num;
	cout<<endl<<"cuantas variables desea crear: ";
	cin>>num;

	for (int i = 0; i < num; ++i)
	{
		Binario* temp =new Binario();
		listavariables.push_back(temp);
	}

	listarvariables(listavariables);

	int opc=9;

	int va1,va2;
	cout<<endl<<"cual es el numero del primera variable operar: ";
	cin>>va1;
	cout<<endl<<"cual es el numero de la segunda variable operar: ";
	cin>>va2;


	cout<<endl<<"¿Que operacion desea hacer?\n1.-crear mas varibles\n2.-disyuncion\n3.-conjuncion\n4.-implicacion\n5.-doble implicacion\n6.-disyuncion exclusiva\n7.-Salir\nque opcion";
	while(opc!=7)
	{
		if (opc==1)
		{
			
			Binario* temp =new Binario();
			listavariables.push_back(temp);
			cout<<endl<<"creado con exito"<<endl;
		}
		if (opc==2)
		{
			Binario* total=new Binario();

			total=*listavariables.at(va1)+listavariables.at(va2);
			
			cout<<"Disyuncion: "<<total->getArreglo();
		}

		if (opc==3)
		{
			
			Binario* total=new Binario();

			total=*listavariables.at(va1)-listavariables.at(va2);
			
			cout<<"Conjuncion: "<<total->getArreglo();
					
		}
		if (opc==4)
		{
		
			Binario* total=new Binario();

			total=*listavariables.at(va1)*listavariables.at(va2);
			
			cout<<"Implicacion: "<<total->getArreglo();
					
		}
		if (opc==5)
		{
			
			Binario* total=new Binario();

			total=*listavariables.at(va1)/listavariables.at(va2);
			
			cout<<"Doble implicacion:  "<<total->getArreglo();
					
		}
		if (opc==6)
		{
		
			Binario* total=new Binario();

			total=*listavariables.at(va1)^listavariables.at(va2);
			
			cout<<"Disyuncion exclusiva: "<<total->getArreglo();
					

			/* code */
		}
	}



	return 0;
}

void listarvariables(vector <Binario*> tlista)
{

	cout<<endl<<"----------LISTA DE VARIABLES---------------------";
	for (int i = 0; i < tlista.size(); ++i)
	{
		string impresion="";

		cout << endl<<"        Variable numero: " << (i) << endl;
			int* temp=tlista[i]->getArreglo();
			cout<<"----------------------------------------"<<endl;
	}

}