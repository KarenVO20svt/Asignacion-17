#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void Generar_Numeros(int &n1, int &n2, int &n3, int &n4) 
{
	srand(time(NULL));
	n1 = 1 + (rand() % 40);
	n2 = 1 + (rand() % 40);
	n3 = 1 + (rand() % 40);
	n4 = 1 + (rand() % 40);
}

void Hallar_mayor() 
{
	int n1, n2, n3, n4;
	Generar_Numeros(n1, n2, n3, n4);
	if (n1 > n2 && n1 > n3 && n1 > n4)
	{
		cout << "El número mayor es el primero" << endl << endl;
	}
	if (n2 > n1 && n2 > n3 && n2 > n4)
	{
		cout << "El número mayor es el segundo" << endl << endl;
	}
	if (n3 > n1 && n3 > n2 && n3 > n4)
	{
		cout << "El número mayor es el tercero" << endl << endl;
	}
	if (n4 > n1 && n4 > n2 && n4 > n3)
	{
		cout << "El número mayor es el cuarto" << endl << endl;
	}
}

void Hallar_menor() 
{
	int n1, n2, n3, n4;
	Generar_Numeros(n1, n2, n3, n4);
	if (n1 < n2 && n1 < n3 && n1 < n4)
	{
		cout << "El número menor es el primero" << endl << endl;
	}
	if (n2 < n1 && n2 < n3 && n2 < n4)
	{
		cout << "El número menor es el segundo" << endl << endl;
	}
	if (n3 < n1 && n3 < n2 && n3 < n4)
	{
		cout << "El número menor es el tercero" << endl << endl;
	}
	if (n4 < n1 && n4 < n2 && n4 < n3)
	{
		cout << "El número menor es el cuarto" << endl << endl;
	}
}

void Hallar_anterior_mayor() 
{
	int n1, n2, n3, n4;
	Generar_Numeros(n1, n2, n3, n4);
	if (n1 > n2 && n2 > n3 && n2 > n4)
	{
		cout << "El segundo número mayor es el segundo" << endl << endl;
	}
	if (n1 > n3 && n3 > n2 && n3 > n4)
	{
		cout << "El segundo número mayor es el tercero" << endl << endl;
	}
	if (n1 > n4 && n4 > n2 && n4 > n3)
	{
		cout << "El segundo número mayor es el cuarto" << endl << endl;
	}
	if (n2 > n1 && n1 > n3 && n1 > n4)
	{
		cout << "El segundo número mayor es el primero" << endl << endl;
	}
	if (n2 > n3 && n3 > n1 && n3 > n4)
	{
		cout << "El segundo número mayor es el tercero" << endl << endl;
	}
	if (n2 > n4 && n4 > n1 && n4 > n3)
	{
		cout << "El segundo número mayor es el cuarto" << endl << endl;
	}
	if (n3 > n1 && n1 > n2 && n1 > n4)
	{
		cout << "El segundo número mayor es el primero" << endl << endl;
	}
	if (n3 > n2 && n2 > n1 && n2 > n4)
	{
		cout << "El segundo número mayor es el segundo" << endl << endl;
	}
	if (n3 > n4 && n4 > n1 && n4 > n2)
	{
		cout << "El segundo número mayor es el cuarto" << endl << endl;
	}
	if (n4 > n1 && n1 > n2 && n1 > n3)
	{
		cout << "El segundo número mayor es el primero" << endl << endl;
	}
	if (n4 > n2 && n2 > n1 && n2 > n3)
	{
		cout << "El segundo número mayor es el segundo" << endl << endl;
	}
	if (n4 > n3 && n3 > n1 && n3 > n2)
	{
		cout << "El segundo número mayor es el tercero" << endl << endl;
	}
}

void Ordenar(int numeros[3]) 
{
	int n1, n2, n3, n4;
	Generar_Numeros(n1, n2, n3, n4);
	int array[4] = { n1,n2,n3,n4 };
	int i, j, aux;

	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++) {
			if (array[j] > array[j + 1]) {
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		numeros[i] = array[i];
	}
}

void Graficar()
{
	int numeros[3];
	Ordenar(numeros);
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j < 170; j++)
		{
			if (i == 2 && j >= 170 - numeros[0])
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i == 2 && j == 170 - numeros[0] - 1)
			{
				cout << numeros[0];
			}

			if (i == 3 && j >= 170 - numeros[1])
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i == 3 && j == 170 - numeros[1] - 1)
			{
				cout << numeros[1];
			}

			if (i == 4 && j >= 170 - numeros[2])
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i == 4 && j == 170 - numeros[2] - 1)
			{
				cout << numeros[2];
			}
			if (i == 5 && j >= 170 - numeros[3])
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i == 5 && j == 170 - numeros[3] - 1)
			{
				cout << numeros[3];
			}
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
}

int main() 
{
	system("MODE 170,40");
	setlocale(LC_CTYPE, "Spanish");
	int n1, n2, n3, n4;
	int numeros[3];

	Generar_Numeros(n1, n2, n3, n4);
	cout << "El primer número es: " << n1 << endl;
	cout << "El segundo número es: " << n2 << endl;
	cout << "El tercer número es: " << n3 << endl;
	cout << "El cuarto número es: " << n4 << endl << endl;

	Hallar_mayor();
	Hallar_menor();
	Hallar_anterior_mayor();
	Ordenar(numeros);
	cout << "Los números ordenados son: " << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << numeros[i] << " ";
	}
	Graficar();

	_getch();
}