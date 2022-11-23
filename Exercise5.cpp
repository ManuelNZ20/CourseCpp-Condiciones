/*
escriba un programa  que lea de la entrada estándar un carácter 
e indique en la salida estándar si el carácter es una
vocal minúscula o no
*/
#include <iostream>

using namespace std;
int main(){
	char c;
	cout<<"Digite un caracter: ";
	cin>>c;
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vocal minúscula"<<endl;break;
		default:
			cout<<"No es un vocal minúscula"<<endl;
	}
					
	return 0;
}