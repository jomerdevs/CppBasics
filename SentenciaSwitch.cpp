
#include<iostream>
#include<locale.h>

using namespace std;
/*
LA SENTENCIA switch ES UNA ESTRUCTURA DE CONTROL QUE NOS PERMITE EVALUAR UNA OPCION Y DEPENDIENTO SU VALOR 
SE REALIZA UNA INSTRUCION U OTRA, LUEGO DE CADA INSTRUCCION SE DEBE COLOCAR UN break PARA SALIR DEL switch
SI NO LO HACEMOS EJECUTARA TODAS LAS INSTRUCCIONES DEL switch, LOS SWITCH TIENEN UN default QUE ES LO QUE 
SE EJECUTARA SI INGUNO DE LOS CASO SE CUMPLEN< ES PARECIDO AL else DE UN if... VEAMOS UN EJEMPLO CON UN 
CONVERSOR DE TEMPERATURA
*/
int main() {
	setlocale(LC_ALL,"spanish");

	float celcius = 0, kelvin = 0, farenheit = 0;
	int opcion = 0;

	cout << "Ingresa la temperatura en Celcius que desea convertir: ";
	cin >> celcius;

	cout << "Seleccione a que tipo la quiere convertir:\n--- Presione (1) para Farenheit ---\n--- Presione (2) para Kelvin ---\n";
	cin >> opcion;

	kelvin = celcius + 273.15;
	farenheit = (celcius * 1.8) + 32;

	switch (opcion) {
	case 1: cout << "El equivalente a " << celcius << " grados celcius en grados farenheit es de " << farenheit << " grados\n";
		break;
	case 2: cout << "El equivalente a " << celcius << " grados celcius en grados kelvin es de " << kelvin << " grados\n";
		break;
	default: cout << "XXX --- Opción invalida --- XXX\n"; 
		break;
	}

	return EXIT_SUCCESS;
}