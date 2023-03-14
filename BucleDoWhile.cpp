#include<iostream>

using namespace std;
/*
	EL BUCLE do-while ES PRACTICAMENTE IGUAL QUE EL BUCLE while, CON LA DIFERENCIA DE QUE EN EL BUCLE do-while
	ASEGURAMOS QUE EL CODIGO DENTRO DEL BUCLE SE EJECUTE AL MENOS 1 VEZ
*/
int main() {
	int respuesta = 1;

	do {
		//Esto se ejecuta aunque inicalmente la condición del while no se cumpla, como es el caso que respuesta no es igual a 2
		cout << "Desea cerrar el programa?   1) Si    2) No\n";
		cin >> respuesta;
	} while (respuesta == 2);

	return EXIT_SUCCESS;
}