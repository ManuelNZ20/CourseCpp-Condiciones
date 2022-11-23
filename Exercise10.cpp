#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numberAge;
    cout << "Write a number: ";
    cin >> numberAge;
    if (numberAge > 0 && numberAge <= 12)
    {
        switch (numberAge)
        {
        case 1:
            cout << "ENERO" << endl;
            break;
        case 2:
            cout << "FEBRERO" << endl;
            break;
        case 3:
            cout << "MARZO" << endl;
            break;
        case 4:
            cout << "ABRIL" << endl;
            break;
        case 5:
            cout << "MAYO" << endl;
            break;
        case 6:
            cout << "JUNIO" << endl;
            break;
        case 7:
            cout << "JULIO" << endl;
            break;
        case 8:
            cout << "AGOSTO" << endl;
            break;
        case 9:
            cout << "SEPTIEMBRE" << endl;
            break;
        case 10:
            cout << "OCTUBRE" << endl;
            break;
        case 11:
            cout << "NOVIEMBRE" << endl;
            break;
        case 12:
            cout << "DICIEMBRE" << endl;
            break;
        }
    }
    else
    {
        cout << "Número erronéo";
    }

    return 0;
}
