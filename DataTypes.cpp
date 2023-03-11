
#include <iostream>
#include <locale.h>
using namespace std;
/*
	------------------------ TIPOS DE DATOS EN C++ Y SUS RANGOS -----------------------

	    TIPO DE DATO           TAMAÑO            RANGO DE VALORES
	char --------------->  1 Byte(8bits) -->  con signo: -128 a 127
											  sin signo: 0 a 255
	short int (short) -->  2 Bytes -------->  con signo: -32768 a 32767
											  sin signo: 0 a 65535
	int  --------------->  4 Bytes -------->  con signo: -2147483648 a 2147483647
											  sin signo: 0 a 4294967295
	long int (long) ---->  8 Bytes -------->  con signo: -2147483648 a 2147483647
											  sin signo: 0 a 4294967295
	bool --------------->  1 Byte  -------->  true o false
	float -------------->  4 Bytes -------->  3.4e +/- 38 (6 decimales)
	double ------------->  8 Bytes -------->  1.7e +/- 308 (15 dígitos)
	long double -------->  8 Bytes -------->  1.7e +/- 308 (15 dígitos)
	
*/

int main() {
	setlocale(LC_ALL, "spanish"); // para que nos permita usar las ñ y acentos
	// TYPE CHAR/TIPO CHAR
	char a = 'b';
	cout <<"El valor de a es "<< a<<" y su tamaño es de: "<<sizeof(a)<<" byte\n"; // 1 byte

	// TYPE SHORT INT (SHORT)/TIPO SHORT INT (SHORT) 
	short shrt = 30000;
	unsigned short unsigShort = 60000; // unsigned if we want to accept only positive numbers and can store a higher positive value
	cout << "El valor de shrt es " << shrt << " y su tamaño es de: " << sizeof(shrt) << " bytes\n"; // 2 bytes

	// TYPE INT/ TIPO INT
	int num = 200000000;
	unsigned int unNum = 2000000000;
	cout << "El valor de num es " << num << " y su tamaño es de: " << sizeof(num) << " bytes\n"; // 4 bytes

	// TYPE LONG INT (LONG)
	long long lng = 20000000000;
	cout << "El valor de lng es " << lng << " y su tamaño es de: " << sizeof(lng) << " bytes\n"; // 8 bytes

	// TYPE FLOAT/TIPO FLOAT
	float flt = 3.8; // %f shows all 6 decimals, %.2f shows 2 decimals, %.2f shows 3 decimals after the point
	
	printf("El valor de flt es %f y su peso es de: %d bytes\n", flt, sizeof(flt));
	//  usando cout<< muestra el número de decimales con los que fue declarado en este caso 3.8
	cout << "El valor de flt es " << flt << " y su tamaño es de: " << sizeof(flt) << " bytes\n"; // 4 bytes
	printf("El valor de flt es %.2f y su peso es de: %d bytes\n", flt, sizeof(flt)); // shows 2 decimals after the point
	printf("El valor de flt es %.3f y su peso es de: %d bytes\n", flt, sizeof(flt)); // shows 3 decimals after the point

	// TYPE BOOL/TIPO BOOL
	bool booleano = true;
	// EN: to print booleans that shows true or false we must use cout<<boolalpha, otherwise instead of true it prints 1 and 0 for false
	// ES: para imprimir booleanos que muestre true o false debemos usar cout<<boolalpha, de lo contrario en vez de true imprime 1 y 0 por falso
	cout <<boolalpha<< "El valor de booleano es " << booleano << " y su tamaño es de: " << sizeof(booleano) << " bytes\n"; // 1 byte

	return EXIT_SUCCESS;
	// si queremos no retornamos nada en apps modernas de C++
	// return 0; in main() is optional now in modern C++ apps / return 0; en main() es opcional en aplicaiones modernas de C++
}