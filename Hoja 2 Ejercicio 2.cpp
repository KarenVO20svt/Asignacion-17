#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void SumarComplejos(int &r1, int &r2, int &i1, int &i2, int &sumaR, int &sumaI) 
{
	sumaR = r1 + r2;
	sumaI = i1 + i2;
}

void RestarComplejos(int &r1, int &r2, int &i1, int &i2, int &restaR, int &restaI) 
{
	restaR = r1 - r2;
	restaI = i1 - i2;
}

int main() 
{
	setlocale(LC_CTYPE, "Spanish");
	char opci�n;
	int r1, r2, i1, i2, sumaR, sumaI, restaR, restaI;
	while (1)
	{
		cout << "\t\tMENU\n\t\t====\n";
		cout << "A. Sumar 2 N�meros Complejos.\n";
		cout << "B. Restar 2 N�meros Complejos.\n";
		cout << "X. Salir del Programa\n";
		cout << "Ingrese la opci�n elegida: ";
		cin >> opci�n;
		opci�n = toupper(opci�n);

		switch (opci�n) 
		{
		case 'A': 
		{
			cout << "N�mero 1" << endl;
			cout << "Parte Real: ";
			cin >> r1;
			cout << "Parte Imaginaria: ";
			cin >> i1;
			cout << endl;
			cout << "N�mero 2" << endl;
			cout << "Parte Real: ";
			cin >> r2;
			cout << "Parte Imaginaria: ";
			cin >> i2;
			cout << endl;
			SumarComplejos(r1, r2, i1, i2, sumaR, sumaI);
			cout << "(" << r1 << "+" << i1 << "i)+(" << r2 << "+" << i2 << "i)=(" << sumaR << "+" << sumaI << "i)" << endl;
			break;
		}
		case 'B': 
		{
			cout << "N�mero 1" << endl;
			cout << "Parte Real: ";
			cin >> r1;
			cout << "Parte Imaginaria: ";
			cin >> i1;
			cout << endl;
			cout << "N�mero 2" << endl;
			cout << "Parte Real: ";
			cin >> r2;
			cout << "Parte Imaginaria: ";
			cin >> i2;
			cout << endl;
			RestarComplejos(r1, r2, i1, i2, restaR, restaI);
			cout << "(" << r1 << "+" << i1 << "i)-(" << r2 << "+" << i2 << "i)=(" << restaR << "+" << restaI << "i)" << endl;
			break;
		}
		case 'X':
			exit(0);
		default:
			cout << "ERROR" << endl << endl;
			break;
		}
	}
	
	_getch();
}