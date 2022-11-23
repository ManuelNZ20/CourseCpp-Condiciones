/*
	Escribe un programa que lea tres números y determine cuál de ellos
	es el mayor.
*/
#include<iostream>

using namespace std;


int main(){
	int n[3],max = -999999;
	
	for(int i=0;i<3;i++){
		cout<<(i+1)<<". ingrese un número: ";
		cin>>n[i];
	}
	for(int i=0;i<3;i++){
		if(n[i]>max){
			max = n[i];
		}
	}
	
	cout<<"Número mayor: "<<max<<endl;
	
	
	
	return 0;
}
