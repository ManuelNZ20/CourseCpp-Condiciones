/*
Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula,
es una vocal mayúscula o no es una vocal.
*/

#include <iostream>
using namespace std;
int main(){
	char c;
	cout<<"Digite un carácter: ";
	cin>>c;
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"Vocal minúscula"<<endl;break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		cout<<"Vocal mayúscula"<<endl;break;
		default:
		cout<<"No es una vocal"<<endl;break;	
	}
	return 0;		
}