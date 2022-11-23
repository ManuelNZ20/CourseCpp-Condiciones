/*
Hacer un programa que simule un cajero automatico con un saldo inicial de 1000
Dólares
opciones
Ingresar dinero
Retirar dinero
Salir
*/
 #include <iostream>

 using namespace std;
 int main(){
    int options;
    float initialBalance = 1000, depositMoney = 0,withdrawals=0;//saldo inicial
    cout<<"***Bienvenido***\n"<<
         "1. Ingresar dinero\n"<<
         "2. Retirar dinero\n"<<
         "3. Salir"<<endl;
    cin>>options;
    switch(options){
        case 1:
            cout<<"Ingrese la cantidad de dinero a despositar: ";
            cin>>depositMoney;
            if(depositMoney<0){
                cout<<"Cantidad de dinero erronea"<<endl;
            }else{
                initialBalance+=depositMoney;
                cout<<"Cantidad de dinero actual: "<<initialBalance<<endl;
            }
            break;
        case 2:
            cout<<"Ingrese la cantidad de dinero que desea retirar: ";
            cin>>withdrawals;
            if (withdrawals>0)
            {
            if(withdrawals>initialBalance){
                cout<<"Usted no cuenta con la cantidad de dinero disponible"<<
                    "\nSu cantidad de dinero disponible es: "<<initialBalance<<endl;
            }else{
                initialBalance -= withdrawals;
                cout<<"Su cantidad de dinero actual es: "<<initialBalance<<endl;
            }
            }else{
                cout<<"Cantidad de dinero erronéa"<<endl;
            }
        case 3: break;
    }
    cout<<"Programa finalizado";
    return 0;
 }