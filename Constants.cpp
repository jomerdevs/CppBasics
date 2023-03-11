
#include<iostream>
#include<locale.h>




// ------ CONSTANTS ZONE / ZONA DE CONSTANTES ------ _ _
#define PI 3.14                                       //|
#define TOTAL 20                                      //|
#define TEXT "APROBADO"                                  //|
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

using namespace std;
// ------------- CONSTANTS / CONSTANTES -------------
/*
	para definir constantes hay que utilizar la palabra #define seguida por el nombre 
	generalmente en mayuscula y su valor.. la sintaxis es la siguiente: ===>  #define PI 3.14
	
*/
int main() {

	setlocale(LC_ALL,"spanish");

	// CONSTANT INSIDE A FUNCTION / CONSTANTE DENTRO DE UNA FUNCION
#define URL "https://cualquier.sitio"

	cout << TEXT << "\n"; // print "APROBADO" / imprime "APROBADO"
	cout << URL << "\n"; // print "https://cualquier.sitio" / imprime "https://cualquier.sitio"

	return EXIT_SUCCESS;
}