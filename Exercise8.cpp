/*
Escribe un program que lea de la entrada estándar tres números
Después debe leer un cuarto número e indicar si el número coincide
con alguno de los introducidos con anterioridad
*/

#include <iostream>
using namespace std;
int main(){
	int n[3],numero;
	for(int i=0;i<3;i++){
		cout<<(i+1)<<".Digite un numero: ";
		cin>>n[i];
	}
	cout<<"\nDigite un numero adicional: ";
	cin>>numero;
	
	for(int i=0;i<3;i++){
		if(n[i]==numero){
			cout<<"El número "<<n[i]<<" coincide"<<endl;
		}
	}
	
	return 0;
}