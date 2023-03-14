
#include<iostream>

using namespace std;

/*
PARA PODER CREAR ARREGLOS DE CARACTERES ES NECESARIO INGRESAR LA PALABRA char SEGUIDA DEL NOMBRE DEL ARREGLO 
SEGUIDO POR COLCHETES Ej: char nombre[] = "Juan"; .. SI EL ARREGLO SE LE ASIGNA UN VALOR INICIAL NO HABRA QUE 
ESPECIFICAR EL TAMAÑO, PERO SI NO SE LE DA UN VALOR INICIAL HAY QUE ESPECIFICAR EL TAMAÑO Ej: char nombre[100]; ..

En el arreglo char nombre[] = "Juan"; .. EL ARREGLO CONSTA DE 5 ELEMENTOS, YA QUE TODO ARREGLO DE CARACTERES 
TERMINA CON '\0' POR LO QUE NUESTRO ARREGLO SERIA EN REALIDAD:

char nombre[] = {'J','u','a','n','\0'}
*/
int main() {

	char saludo[] = "Hola"; //arreglo con valor inicial, no hay que especificar tamaño
	char nombre[100]; //arreglo sin valor inicial, hay que especificar el tamaño del arreglo

	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << saludo << " " << nombre << endl;

	return EXIT_SUCCESS;
}