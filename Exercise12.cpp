/*
Hacer un menú que considere las siguiente opciones:
caso 1: Cubo de un número
caso 2: Número par e impar
Case 3: Salir
*/

#include<iostream>
#include <math.h>//librería matematica de c++
using namespace std;

int main(int argc, char const *argv[])
{
    int options,number;
    cout<<"***Menú***\n"<<
          "1. Cubo de un número\n"<<
          "2. Número par e impar\n"<<
          "3. Salir";
    cin>>options;
    switch(options){
        case 1:
        cout<<"Write a number: ";
        cin>>number;
        cout<<"Cubo de un número: "<<pow(number,3)<<endl;
        break;
        case 2:
        cout<<"Write a number: ";
        cin>>number;
        if (number==0)
        {
            cout<<"Neutral number"<<endl;//número neutro
        }else{
            if (number%2==0)
            {
                cout<<"Even number"<<endl;//número par
            }else{
                cout<<"Odd number"<<endl;//número impar
            }
            
        }
        break;
        case 3:break;
    }
    cout<<"Programa finalizado"<<endl;
    return 0;
}
