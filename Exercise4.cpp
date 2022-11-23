/*
Comprobar si un número digitado por el usuario es positivo o negativo
*/

#include <iostream>

using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero: ";
	cin>>numero;
	if(numero==0){
		cout<<"Numero neutro";
	}else if(numero>0){
		cout<<"Numero positivo";
	}else{
		cout<<"Numero negativo";
	}
	
	return 0;
}