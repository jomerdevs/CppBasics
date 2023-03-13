
#include<iostream>
#include<locale.h>

using namespace std;
/*
	--- OPERADORES LOGICOS ---

	    &&         y           => Verdadero solo si todas las condiciones se cumplen
		||         o           => Verdadero si al menos una de las condiciones de cumplen
		!          negaci�n

*/
int main() {
	setlocale(LC_ALL, "spanish");

	int number = 0;
	cout << "Ingrese un n�mero: ";
	cin >> number;

	//operador &&... para que sea verdadero deben de cumplirse todas las condiciones, en este caso el n�mero debe ser mayor que 100 y menor que 1000
	if ((number > 100) && (number < 1000)) {
		cout << "El n�mero est� entre 100 y 1000\n";
	}

	//operador ||... para que sea verdadero al menos una condici�n debe cumplirse, en este caso ya sea menor a 100 o mayor a 1000
	if ((number < 100) || (number > 1000)) {
		cout << "El se cumpli� la condici�n el n�mero es menor que 100 o mayor a 1000\n";
	}

	/* 
	negaci�n !....cambia el valor de la condicion, es decir si la condici�n es (si el numero es mayor a 100)
	con la negaci�n se interpreta (si el n�mero no es mayor a 100)
	*/
	if ( !(number > 100)) {
		cout << "la condici�n se cumpli� \n"; //solo entra aqu� si el n�mero es menor o igual a 100 ya que se esta negando la condici�n
	}

	return EXIT_SUCCESS;
}