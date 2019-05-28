#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int Factorial(int &n) 
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

double Exponencial(double &a, int &k) 
{
	double exp = 0;
	double cexp;
	for (int i = 1;i <= k;i++) 
	{
		exp = exp + (pow(a, i)) / Factorial(i);
	}
	cexp = exp + 1;
	return cexp;
}

void Dibuja(int &n) 
{
	for (int j = 1; j <= n; ++j) {
		for (int i = 1; i <= n - j; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j - 1; ++i)
			cout << " " << i;
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 1; i <= n - j - 1; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j + 1; ++i)
			cout << " " << i;
		cout << endl;
	}
}

int main() 
{
	setlocale(LC_CTYPE, "Spanish");
	int opción;
	int n;
	double a;
	int k;
	while (1)
	{
		cout << "\t\tMENU PRINCIPAL\n1) Determinar el factorial de un número\n2) Calcular el valor de e^a\n3) Imprime rombo\n4) Fin\n";
		cin >> opción;
		switch (opción) 
		{
		case 1: 
		{
			do
			{
				cout << "Ingrese el número: ";
				cin >> n;
			} while (n < 1);
			cout << "El factorial del número es " << Factorial(n) << endl;
			cout << endl;
			break;
		}
		case 2: 
		{
			do
			{
				cout << "Ingrese el valor de a: ";
				cin >> a;
			} while (a < 0);
			do
			{
				cout << "Ingrese el valor de k: ";
				cin >> k;
			} while (k < 0 || k>20);
			cout << "El exponencial es " << Exponencial(a, k) << endl;
			cout << endl;
			break;
		}
		case 3: 
		{
			do
			{
				cout << "Ingrese un número: ";
				cin >> n;
			} while (n < 1 || n>11);
			Dibuja(n);
			cout << endl;
			break;
		}
		case 4: 
			exit(0);
			break;
		default:
			cout << "ERROR" << endl << endl;
			break;
		}
	}

	_getch();
}