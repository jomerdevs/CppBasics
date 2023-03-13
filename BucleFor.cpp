#include<iostream>
#include<locale.h>

using namespace std;

/*
A DIFERENCIA LOS OTROS BUCLES, EL BUCLE for RECIBE 3 PARAMETROS, UN INDICE(El cual puede ser declarado antes o dentro de los parentesis del for),
LA CONDICION A EVALUAR Y UNA INSTRUCCION NORMALMENTE UN INCREMENTO O DECREMENTO DEL INDICE
*/
int main() {
	setlocale(LC_ALL, "spanish");


	int valor;
	//bucle for con el indice declarado antes
	for (valor = 1; valor <= 10; valor++) {
		cout << "valor = "<< valor << "\n";
		//este bucle va a imprimir los valores del 1 al 10
	}

	//bucle for declarando el indice dentro de los parametros del for
	for (int i = 1; i <= 10; i++) {
		cout << "i = " << i << "\n";
		//este bucle va a imprimir los valores del 1 al 10
	}

	return EXIT_SUCCESS;
}