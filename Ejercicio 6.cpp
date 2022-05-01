/*Costruir un programa que capture un numero cualesquiera e 
informe si es o no es mayor de 50 y multiplo de tres*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int numero;
	
	cout<<"***PARA CERRAR EL PROGRAMA PRESIONE 0***"<<endl;
	do{
	cout<<"Ingrese un numero: "; cin>>numero;
	if(numero > 50){
		cout<<"El numero "<<numero<<" es mayor a 50";
	}
	else if(numero == 50){
		cout<<"El numero "<<numero<<" es igual a 50";
	}
	else
	{
		cout<<"El numero "<<numero<<" es menor a 50";
	}
	if(numero %3 ==0)
	{
		cout<<" y multiplo de 3\n\n";
	}
	else
	{
		cout<<" y NO multiplo de 3\n\n";
	}
	}while( numero != 0);
	
	getch();
	return 0;
}
