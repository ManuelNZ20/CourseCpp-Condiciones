/*
Realice uun programa que lea una valor entero y determine si se trata
de un número par o impar
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	cout<<"Digite un número: ";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"Numero par"<<endl;
	}else{
		cout<<"Número impar"<<endl;
	}
	
	return 0;
}