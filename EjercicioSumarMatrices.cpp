
#include<iostream>
#include<locale.h>

using namespace std;
/*
LO PRIMERO A TENER EN CUENTA ES QUE PARA SUMAR MATRICES ES NECESARIO QUE LAS MATRICES TENGAN 
EL MISMO NUMERO DE FILAS QUE DE COLUMNAS
*/

// --- PROTOTIPOS DE FUNCIONES
void LlenarMatriz(int fila, int columna, int a[20][20]);
void SumarMatriz(int a[20][20], int b[20][20], int c[20][20]);
void imprimirMatriz(int fila, int columna, int a[20][20]);

int main() {
	setlocale(LC_ALL,"spanish");
	/* declaramos el tamaño de cada matriz, pero no necesariamente tenemos que usar las 20 filas 
	y 20 columnas, vamos a permitir elegir al usuario */
	int matriz1[20][20], matriz2[20][20], matrizResultante[20][20]; 
	int fila = 0, columna = 0;

	cout << "Ingrese el número de filas: ";
	cin >> fila;
	cout << "Ingrese el número de columnas: ";
	cin >> columna;

	cout << "\nIngrese los valores de la primera matriz: \n";
	LlenarMatriz(fila, columna, matriz1);

	cout << "\nIngrese los valores de la segunda matriz: \n";
	LlenarMatriz(fila, columna, matriz2);

	SumarMatriz(matriz1, matriz2, matrizResultante);
	cout << "\nLa suma de las matrices es: " << endl;
	imprimirMatriz(fila, columna, matrizResultante);

	return EXIT_SUCCESS;
}

// --- DEFINICIONES DE FUNCIONES
void LlenarMatriz(int fila, int columna, int a[20][20]) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++) {
			cout << "Ingrese un número para la posición [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void SumarMatriz(int a[20][20], int b[20][20], int c[20][20]) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void imprimirMatriz(int fila, int columna, int a[20][20]) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}