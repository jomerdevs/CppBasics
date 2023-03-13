
#include<iostream>
#include<locale.h>

using namespace std;
/*
LOS ARREGLOS NOS PERMITEN MANEJAR UNA GRAN CANTIDAD DE DATOS SIN TENER QUE ESTAR DECLARANDO VARIABLES PARA CADA ELEMENTO, SINO 
QUE SIMPLEMENTE DECLARAMOS UN ARREGLO Y LE VAMOS ASIGNANDO TODOS LOS VALORES NECESARIOS.. EXISTEN ARREGLOS UNIDIMENSIONALES( vectores )
Y ARREGLOS MULTIDIMENSIONALES( matrices ).. AL DECLARAR UN ARREGLO HAY QUE ESPECIFICAR ENTRE CORCHETES SU TAMA�O ES DECIR, EL NUMERO DE
ELEMENTOS QUE PODRA ALMACNAR..LOS ARREGLOS PRIMITIVOS SOLO PUEDEN ALMACENAR DATOS DE UN MISMO TIPO, HAY FRAMEWORKS Y LIBRERIAS QUE TE 
PERMITEN USAR ARREGLOS TIPO COLECCIONES QUE PUEDEN ALMACENAR DISTINTOS TIPOS DE DATOS, PERO LOS ARREGLOS PRIMITIVOS DEL LENGUAJE C++ 
SOLO PERMITEN ALMACENAR DATOS DE UN MISMO TIPO
*/
int main() {
	setlocale(LC_ALL,"spanish");
	
	//declaramos el array y le especificamos que tendr� un tama�o de 10, es decir, podr� almacenar un m�ximo de 10 elementos
	int numbers[10];

	//Programa para almacenar datos en un array de un tama�o determinado
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese un n�mero para almacenar en el arreglo: ";
		/* vamos guardando cada elemento en su indice correspondiente, los indices de los arregos empiezan en 0 
		por lo que ir� tomando los valores de i que se inicializa en 0 y va aumentando en 1: 0,1,2,3,4,5,6..... */
		cin >> numbers[i]; 
	}

	//determinamos el largo del arreglo para hacer la condici�n din�mica 
	int largo = sizeof(numbers) / sizeof(numbers[0]);

	cout << "\nLos elementos del arreglo son: " << endl;

	//imprimimos todos los elementos del arreglo mientras que el indice sea menor que el largo..
	//tambi�n como sabemos el largo del arreglo podr�amos decir i < 10, pero es mejor hacerlo din�mico determinando el largo antes
	for (int i = 0; i < largo; i++) {
		cout << numbers[i] << endl;
	}

	return EXIT_SUCCESS;

}