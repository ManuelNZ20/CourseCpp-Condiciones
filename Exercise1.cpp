/*1.Escribe un programa que lea dos números y determine cuál de ellos
es el mayor*/
#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	
	cout<<"Digite un número: ";
	cin>>n1;
	cout<<"Digite un número: ";
	cin>>n2;
	
	if(n1==n2){
		cout<<"Son iguales"<<endl;
	}else if(n1>n2){
		cout<<n1<<" es mayor que "<<n2<<endl;
	}else{
		cout<<n2<<" es mayor que "<<n1<<endl;
	}
	
	return 0;
}