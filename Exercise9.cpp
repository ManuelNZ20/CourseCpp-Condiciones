/*
Cambiar un número entero con el mismo valor pero en romanos
M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/

#include <iostream>

using namespace std;

int main()
{
	int number, M = 0, C = 0, X = 0, V = 0, I = 0;
	cout << "Write number: ";
	cin >> number;	   // 3552
	M = number / 1000; /// 5
	number %= 1000;	   //
	C = number / 100;
	number %= 100;
	X = number / 10;
	number %= 10;
	I = number;
	switch (M)
	{
	case 1:
		cout << "M";
		break;
	case 2:
		cout << "MM";
		break;
	case 3:
		cout << "MMM";
		break;
	}
	switch (C)
	{
	case 1:
		cout << "C";
		break;
	case 2:
		cout << "CC";
		break;
	case 3:
		cout << "CCC";
		break;
	case 4:
		cout << "CD";
		break;
	case 5:
		cout << "D";
		break;
	case 6:
		cout << "DC";
		break;
	case 7:
		cout << "DCC";
		break;
	case 8:
		cout << "DCCC";
		break;
	case 9:
		cout << "CM";
		break;
	}
	switch (X)
	{
	case 1:
		cout << "X";
		break;
	case 2:
		cout << "XX";
		break;
	case 3:
		cout << "XXX";
		break;
	case 4:
		cout << "XL";
		break;
	case 5:
		cout << "L";
		break;
	case 6:
		cout << "LX";
		break;
	case 7:
		cout << "LXX";
		break;
	case 8:
		cout << "LXXX";
		break;
	case 9:
		cout << "XC";
		break;
	}

	switch (I)
	{
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	}
	cin.ignore(); // para que no se cierre la consola
	cin.get();
	return 0;
}