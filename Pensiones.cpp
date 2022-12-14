#include <iostream>
using namespace std;
const int MAX = 100;
int n[MAX];
void ingresar_datos(int cantidad);
void pensiones_iguales(int cantidad);
int main()
{
	int cantidad;
	cout << "Ingresar cantidad pensiones a examinar:";
	cin >> cantidad;
	ingresar_datos(cantidad);
	pensiones_iguales(cantidad);
}
void ingresar_datos(int cantidad)
{
	for (int i = 0; i < cantidad; i++)
	{
		cout << "Ingresar pensiones:";
		cin >> n[i];
	}
}
void pensiones_iguales(int cantidad)
{
	int iguales = 0;
	for (int i = 0; i < cantidad; i++)
	{
		for (int j = 0; j < cantidad; j++)
		{
			if (n[i] == n[j])
			{
				iguales++;
			}
		}
		cout << n[i] << "\t" << iguales << endl;

	}
	
}