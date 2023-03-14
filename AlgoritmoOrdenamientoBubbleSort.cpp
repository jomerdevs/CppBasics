
#include<iostream>
#include<locale.h>

using namespace std;
/*
EL ALGORITMO DE ORDENAMIENTO DE BURBUJA BubbleSort ES UNA DE LOS ALGORITMOS DE ORDENAMIENTO MAS CONOCIDOS, 
Y AUNQUE NO ES TAN EFICIENTE COMO OTROS ALGORITMOS DE ORDENAMIENTO EJEMPLO EL MergeSort, ES DE LOS MAS CONOCIDOS
NO TOCAREMOS AQUI TEMA DE ALGORITMO Y COMPLEJIDAD DE ALGORITMOS YA QUE ESA NO ES LA FINALIDAD DE ESTE REPOSITORIO.

EL ALGORITMO DE ORDENAMIENTO DE BURBUJA LO QUE HACE INTERNAMENTE ES:
- Varias pasadas al arreglo (cantidad de elementos -1)
- Se compara (cantidad de elementos -1)
- Se intercambian los lugares

Ejemplo:
[3, 4, 2, 6, 7] => recorre el arreglo y hace las comparaciones, encuentra el primer par desordenado(4, 2) e intercambia los valores(2, 4)
[3, 2, 4, 6, 7] => segunda recorrida y hace comparaciones, encuentra otro par desordenado(3, 2) e intercambia los valores(2, 3)
[2, 3, 4, 6, 7] => recorre el arreglo, hace comparaciones y ya encuentra el arreglo ordenado :) 
*/
int main() {
	setlocale(LC_ALL,"spanish");

	int arreglo[5], guardar;

	//llenar los datos del arreglo
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un número: ";
		cin >> arreglo[i];
	}

	//determinar el largo del arreglo dinámicamente
	int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

	//ordenar con el método BubbleSort
	for (int i = 0; i < longitud - 1; i++) {
		for (int j = 0; j < longitud - 1; j++) {
			//compara el indice actual con el indice posterior
			if (arreglo[j] > arreglo[j + 1]) {
				//si el indice actual es mayor que el que le sigue entonces guardamos en la variable guardar el indice actual para no perder el valor
				guardar = arreglo[j];
				arreglo[j] = arreglo[j + 1]; //intercambiamos los valores en el indice actual asignamos el valor del indice posterior
				arreglo[j + 1] = guardar; //en el indice posterior guardamos el valor que tenia inicalmente el indice actual y que teniamos resrevado en la variable
			}
		}
	}

	cout << "\nArreglo ordenado:" << endl;
	//mostrar el arreglo ordenado
	for (int i = 0; i < longitud; i++) {
		cout << arreglo[i] << endl;
	}

	return EXIT_SUCCESS;
}