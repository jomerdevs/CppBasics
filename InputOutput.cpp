
#include<iostream>
#include<locale.h>

using namespace std;

/*
	HOW TO TAKE DATA FROM USER INPUT / COMO CAPTURAR DATOS DESDE EL USUARIO

	EN: To take user input we have to use the cin from the std namespace 
	example: std::cin >> ... or if you already imported the std namespace only has to write: cin >>
	ES: Para tomar la entrada del usuario, tenemos que usar el comando cin del namespace std
	ejemplo: std::cin >> ... o si ya has importado el namespace std solo tienes que escribir: cin >>
*/

int main() {
	setlocale(LC_ALL,"spanish");

	int number = 0; // good practice to always initialize variables / buena practica siempre inicializar variables especialmente altomar datos de los ususarios


	cout << "Ingresa un valor desde el teclado: ";
	// Usamos cin>> para decir que va a almacenar en la variable number los datos ingresados desde el teclado por el usuario
	cin >> number; 

	cout << "El valor ingresado por el usuario es: "<< number <<"\n";

	return EXIT_SUCCESS;

}