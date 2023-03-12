#include<iostream>
#include<locale.h>

using namespace std;

/*
----- LAS CONDICIONALES ANIDADAS SON CONDICIONES QUE SE CREAN DENTRO DE OTRA CONDICION -----
*/
int main() {
	setlocale(LC_ALL,"spanish");

	int number = 0;
	cout << "Ingrese un número: ";
	cin >> number;

	if (number > 0) {		

		//CONDICION ANIDADA
		if (number % 2 == 0) cout << "El número es positivo y es par\n";
		else cout << "El número es positivo y es impar\n";
	}
	else if (number == 0) {		
		cout << "El número ingresado es 0";
	}
	else {		
		cout << "El número ingresado es negativo";
	}

	return EXIT_SUCCESS;
}