
#include<iostream>
#include<locale.h>

using namespace std;
/* --- EL OPERADOR TERNARIO SE USA PARA EVALUAR UNA CONDICION Y DAR 2 POSIBLES INSTRUCCIONES SEGUN SE
CUMPLA O NO LA CONDICION, LAS INSTRUCCIONES QUE RETORNE DEBEN DE SER DE UNA LINEA CADA UNA --- */
int main() {
	setlocale(LC_ALL, "spanish");

	int numero = 5;

	//determinar si el n�mero es positivo o no
	(numero > 0) ? cout << "El n�mero es positivo\n" : cout << "El n�mero no es positivo\n";

	return EXIT_SUCCESS;
}