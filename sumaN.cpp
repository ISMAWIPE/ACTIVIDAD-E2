//================================================
//==> Nombre del programa: SumaN
//==> Archivo : suman.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-05-27
//==>Fecha ultima actualización: 2022-05-27
//=================================================
#include <iostream>
using namespace std;
int main ()
{
	int VC1=0,VC2;
	float VC3=0,VC4;
	cout<<"Ingrese la cantidad de valores a sumar : ";
	cin>>VC2;
	do{
		cout<<"Ingrese el elemento "<<VC1+1;
		cin>>VC4;
		VC1=VC1+1;
		VC3=VC3+VC4;
	}while(VC1<VC2);
	cout<<"La suma de los elementos fue : "<<VC3<<endl;
	//================================================
//==> Nombre del programa: SumaN
//==> Archivo : suman.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-05-27
//==>Fecha ultima actualización: 2022-05-27
//=================================================

	return(0);
}
