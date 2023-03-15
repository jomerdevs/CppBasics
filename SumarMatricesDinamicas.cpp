
#include<iostream>
#include<locale.h>

using namespace std;
/*
LO PRIMERO A TENER EN CUENTA ES QUE PARA SUMAR MATRICES ES NECESARIO QUE LAS MATRICES TENGAN
EL MISMO NUMERO DE FILAS QUE DE COLUMNAS
*/

// --- PROTOTIPOS DE FUNCIONES
void LlenarMatriz(int fila, int columna, int **a);
void SumarMatriz(int **a, int **b, int **c, int fila, int columna);
void imprimirMatriz(int fila, int columna, int **a);

int main() {
	setlocale(LC_ALL, "spanish");
	/* declaramos las matrices como punteros, porque van a ser dinámicas, vamos a permitir elegir al usuario
	su tamaño para así no desperdiciar memoria*/
	int **matriz1, **matriz2, **matrizResultante;
	int fila, columna;

	cout << "Ingrese el número de filas: ";
	cin >> fila;
	cout << "Ingrese el número de columnas: ";
	cin >> columna;

	//asignamos el numero de filas de forma dinámica a cada matriz
	matriz1 = new int* [fila];
	matriz2 = new int* [fila];
	matrizResultante = new int* [fila];

	//asignamos el numero de columnas de forma dinamica
	for (int i = 0; i < fila; i++) {
		matriz1[i] = new int[columna];
		matriz2[i] = new int[columna];
		matrizResultante[i] = new int[columna];
	}

	cout << "\nIngrese los valores de la primera matriz: \n";
	LlenarMatriz(fila, columna, matriz1);

	cout << "\nIngrese los valores de la segunda matriz: \n";
	LlenarMatriz(fila, columna, matriz2);

	cout << "\nValores de la primera matriz: \n";
	imprimirMatriz(fila, columna, matriz1);
	cout << "\nValores de la segunda matriz: \n";
	imprimirMatriz(fila, columna, matriz2);
	
	SumarMatriz(matriz1, matriz2, matrizResultante, fila, columna);
		
	cout << "\nLa suma de las matrices es: " << endl;
	imprimirMatriz(fila, columna, matrizResultante);

	return EXIT_SUCCESS;
}

// --- DEFINICIONES DE FUNCIONES
void LlenarMatriz(int fila, int columna, int** a) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++) {
			cout << "Ingrese un número para la posición [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void SumarMatriz(int **a, int **b, int **c, int fila, int columna) {
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void imprimirMatriz(int fila, int columna, int** a) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}