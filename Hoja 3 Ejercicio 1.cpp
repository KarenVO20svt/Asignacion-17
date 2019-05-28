#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int Factorial(int n) 
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

void SenoX(int &n, double&x, double&senox) 
{
	for (int i = 0; i < n; i++)
	{
		senox += (pow(-1, i))*((pow(x, 2 * i + 1)) / Factorial(2 * i + 1));
	}
}

void Digito(int &num, int &n, int &b) 
{
	b = num / pow(10, n);
	b = b % 10;
	if (b < 0) 
	{
		b = b * (-1);
	}
	else if (b == 0)
	{
		b = -1;
	}
}

int main() 
{
	setlocale(LC_CTYPE, "Spanish");
	int n;
	double x, senox;
	int n1, n�mero, b;
	int opci�n;
	while (1)
	{
		cout << "Men� de opciones" << endl;
		cout << "1. Calcular el seno" << endl;
		cout << "2. Hallar el en�simo d�gito" << endl;
		cout << "3. Fin" << endl;
		cout << "Ingrese opci�n: ";
		cin >> opci�n;

		switch (opci�n) 
		{
		case 1: 
		{
			do
			{
				cout << "Ingrese el valor de n: ";
				cin >> n;
			} while (n < 1);
			do
			{
				cout << "Ingrese el valor de x: ";
				cin >> x;
			} while (x <= 0);
			SenoX(n, x, senox);
			cout << "El seno es: " << senox << endl << endl;
			break;
		}
		case 2: 
		{
			do
			{
				cout << "Ingrese el valor de N: ";
				cin >> n1;
			} while (n1 < 0);
			cout << "Ingrese el n�mero: ";
			cin >> n�mero;

			Digito(n�mero, n1, b);
			cout << "El n-�simo d�gito es: " << b << endl << endl;
			break;
		}
		case 3:
			exit(0);
		default:
			cout << "ERROR" << endl << endl;
			break;
		}
	}

	_getch();
}