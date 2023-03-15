
#include<iostream>
#include<locale.h>

using namespace std;

/*
EN C++ EN LOS ARREGLOS DINAMICOS PODEMOS REDIRECCIONAR SU TAMAÑO DURANTE LA EJECUCION, ESO SE LOGRA UTILIZANDO PUNTEROS
(los punteros son variables que almacenan direcciones de memoria) Y A TRAVES DE LA PALABRA RESERVADA new NOSOTROS PODEMOS UTILIZARLOS
PARA PODER RESERVAR LA MEMORIA QUE NECESITEMOS PARA EL ARREGLO DINAMICO
*/

int main() {
	setlocale(LC_ALL, "spanish");
	int estudiantes = 0, curso=0;
	cout << "Ingrese la cantidad de estudiantes: ";
	cin >> estudiantes;
	cout << endl;
	cout << "Ingrese el curso: ";
	cin >> curso;
	cout << endl;

	//primero crearemos un arreglo unidimensional(vector) dinámico
	int* vector; // al poner el * despues del tipo de dato indicamos que es un puntero
	//va a ir modificando su tamaño de acuerdo a lo que ingresemos en la variable estudiantes
	vector = new int[estudiantes];

	//creamos arreglo bidimensional(matriz) dinámica
	int** matriz; // indicando ** decimos que es un puntero hacia punteros
	matriz = new int* [estudiantes]; //reservamos cantidad de filas
	for (int i = 0; i < estudiantes; i++) {
		matriz[i] = new int[curso]; //por cada una de las filas reservamos memoria para las columnas
	}

	// ---- YA TENEMOS RESERVADOS LOS ESPACIOS DINAMICOS TANTO PARA EL VECTOR Y LA MATRIZ ----
	//ahora podemos usar los valores que se ingresen para llenar y mostrar nuestros arreglos, ej:
	for (int i = 0; i < estudiantes; i++) {
		cout << "Ingrese una calificación para el estudiante " << i + 1 << ": ";
		cin >> vector[i];
	}
	//mostramos el arreglo
	cout << "Las calificacones de los estudiantes son: "<< endl;
	for (int i = 0; i < estudiantes; i++) {
		cout << "El estudiante "<< i + 1 << " tiene una calificación de " << vector[i] << endl;
	}

	return EXIT_SUCCESS;
}