
#include<iostream>
#include<locale.h>

using namespace std;
/*
	--- OPERADORES LOGICOS ---

	    &&         y           => Verdadero solo si todas las condiciones se cumplen
		||         o           => Verdadero si al menos una de las condiciones de cumplen
		!          negación

*/
int main() {
	setlocale(LC_ALL, "spanish");

	int number = 0;
	cout << "Ingrese un número: ";
	cin >> number;

	//operador &&... para que sea verdadero deben de cumplirse todas las condiciones, en este caso el número debe ser mayor que 100 y menor que 1000
	if ((number > 100) && (number < 1000)) {
		cout << "El número está entre 100 y 1000\n";
	}

	//operador ||... para que sea verdadero al menos una condición debe cumplirse, en este caso ya sea menor a 100 o mayor a 1000
	if ((number < 100) || (number > 1000)) {
		cout << "El se cumplió la condición el número es menor que 100 o mayor a 1000\n";
	}

	/* 
	negación !....cambia el valor de la condicion, es decir si la condición es (si el numero es mayor a 100)
	con la negación se interpreta (si el número no es mayor a 100)
	*/
	if ( !(number > 100)) {
		cout << "la condición se cumplió \n"; //solo entra aquí si el número es menor o igual a 100 ya que se esta negando la condición
	}

	return EXIT_SUCCESS;
}