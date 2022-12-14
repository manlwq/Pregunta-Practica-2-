#include <iostream>
const int MAX = 100;
int o[MAX];
int n[MAX];
int m[MAX];
void agregar_datos(int cantidad);
void seleccion(int cantidad);
void listar_datos(int cantidad);
void agregar_datos_2(int cant);
void seleccion_2(int cant);
void listar_datos_2(int cant);
void seleccion_3(int cantidad, int cant);
using namespace std;
int main()
{
	int cantidad;
	int cant;
	cout << "Ingresar cantidad de datos para el arreglo 1:";
	cin >> cantidad;
	agregar_datos(cantidad);
	seleccion(cantidad);
	listar_datos(cantidad);
	cout << "Ingresar cantidad de datos para el arreglo 2:";
	cin >> cant;
	agregar_datos_2(cantidad);
	seleccion_2(cantidad);
	listar_datos_2(cantidad);
	seleccion_3(cantidad, cant);


}
void agregar_datos(int cantidad)
{
	for (int i = 0; i < cantidad; i++)
	{
		cout << "Ingresar nota[" << i << "]:";
		cin >> n[i];
	}

}
void seleccion(int cantidad)
{
	for (int i = 0; i < cantidad; i++)
	{
		int min = i;
		for (int j = i + 1; j < cantidad; j++)
		{
			if (n[j] < n[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			int aux;
			aux = n[i];
			n[i] = n[min];
			n[min] = aux;
		}
	}
}
void listar_datos(int cantidad)
{
	cout << "Listado de elementos ordenados\n";
	for (int i = 0; i < cantidad; i++)
	{
		cout << n[i] << endl;
	}
}
void agregar_datos_2(int cant)
{
	for (int i = 0; i < cant; i++)
	{
		cout << "Ingresar nota[" << i << "]:";
		cin >> m[i];
	}
}
void seleccion_2(int cant)
{
	for (int i = 0; i < cant; i++)
	{
		int max = i;
		for (int j = i + 1; j < cant; j++)
		{
			if (m[j] > m[max])
			{
				max = j;
			}
		}
		if (i != max)
		{
			int aux;
			aux = m[i];
			m[i] = m[max];
			m[max] = aux;
		}
	}
}
void listar_datos_2(int cant)
{
	cout << "Listado de elementos ordenados\n";
	for (int i = 0; i < cant; i++)
	{
		cout << m[i] << endl;
	}
}
void seleccion_3(int cantidad, int cant)
{

	int indice = -1;
	for (int i = 0; i < cantidad; i++)
	{
		bool bandera = false;


		for (int j = 0; j < cant; j++)
		{
			if (n[i] == m[j])
			{
				bandera = true;
			}
		}
		if (bandera == false)
		{
			indice++;
			o[indice] = m[i];
		}
	}
	cout << "\nELEMENTOS DEL ARREGLO 02 QUE NO ESTAN EN EL ARREGLO 01\n";
	if (indice < 0)
	{
		cout << "No hay valores iguales entre ambos arreglos\n";
	}
	else
	{
		for (int i = 0; i < indice + 1; i++)
		{
			cout << o[i] << endl;
		}
	}

}
