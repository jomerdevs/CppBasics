
#include<iostream>
#include<locale.h>

using namespace std;

/*
LOS BUCLES SON ESTRUCTURAS REPETITIVAS QUE NOS PERMITEN REPETIR UN BLOQUE DE INSTRUCIONES HASTA QUE SE CUMPLA LA CONDICION DADA
EN EL LENGUAJE DE PROGRAMACION C++ EXISTEN VARIOS TIPOS DE BUCLES COMO SON: while, for, do-while
*/

int main() {
	setlocale(LC_ALL, "spanish");

	int password = 0, confirmPassword = 0;
	bool flag = false;

	/* bucle while..evalua la condici�n dentro de los parentesis y se va a estar ejecutando el bloque de c�digo dentro de sus
	llaves hasta que la condici�n se cumpla */
	while (flag == false) {
		cout << "Ingrese su contrase�a: ";
		cin >> password;
		cout << "Por favor confirmar contrase�a: ";
		cin >> confirmPassword;
		cout << "\n"; // salto de linea

		if (password == confirmPassword) {
			flag = true;
		}
		else {
			cout << "--- Las contrase�as no coinciden, intentelo nuevamente. ---\n";
			cout << "\n"; // salto de linea
		}
	}

	cout << "Contrase�a validada :) \n";

	return EXIT_SUCCESS;
}