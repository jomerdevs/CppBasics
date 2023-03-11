
#include<iostream>
#include<locale.h>

using namespace std;
/*
				BASIC ARITMETHIC OPERATIONS   / OPERACIONES MATEMATICAS BASICAS

					|-- (OPERATOR / OPERADOR)      (OPERATION / OPERACION) --|
							 +                     addition/suma
							 -                     subtraction/resta
							 *                     multiplication/multipicación
							 /                     division/división
							 %                     module/modulo
							 =                     assignment/asignacion
							 ++                    increment by 1/incremento en 1
							 --                    decrement by 1/decremento en 1
							 +=                    addition and assignment/suma y asignación
							 -=                    substraction and assignment/resta y asignación
							 *=                    multiplication and assignment/multiplicación y asignación
							 /=                    division and assignment/división y asignación
*/

int main() {

	setlocale(LC_ALL, "spanish"); // Para poder usar las ñ y los acentos del español

	int num1 = 0, num2 = 0, suma = 0, resta = 0, multiplicacion = 0, modulo = 0;
	float division = 0;

	cout << "Ingrese el primer número: ";
	cin >> num1;

	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "\n"; // new line / nueva línea

	suma = num1 + num2; // addition / suma

	resta = num1 - num2; // substraction / resta

	division = (float)num1 / (float)num2; // division / división

	multiplicacion = num1 * num2; // mutiplication / multiplicación

	modulo = num1 % num2; // module / modulo o resto

	cout << "El valor de la suma es: " << suma << "\n";
	cout << "El valor de la resta es: " << resta << "\n";
	cout << "El valor de la división es: " << division << "\n";
	cout << "El valor de la multiplicación es: " << multiplicacion << "\n";
	cout << "El valor del módulo o resto es: " << modulo << "\n";
	cout << "Incremento en 1 de num1: " << ++num1 << "\n"; // hacemos post incremento para que puede incrementar antes de imprimir
	cout << "Decremento en 1 de num2: " << --num2 << "\n"; // hacemos post decremento para que puede decrementar antes de imprimir

	return EXIT_SUCCESS;
}