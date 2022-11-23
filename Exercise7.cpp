/*
Escriba un programa que solicite una edad (un entero) e indique en la
salida estándar si la edad introducida está en el rango[18-25]
*/

#include<iostream>

using namespace std;

int main()
{
	int edad;
	cout<<"Digite una edad: ";
	cin>>edad;
	if((edad>17)&&(edad<26)){
		cout<<"Su edad si se encuentra dentro del rango";
	
	}else{
		cout<<"Su edad esta fuera de rango";
	}
	
	
	return 0;
}