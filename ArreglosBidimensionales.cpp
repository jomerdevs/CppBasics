
#include<iostream>

using namespace std;

/*
PARA CREAR ARREGLOS BIDIMENSIONALES(matrices) SE ESPECIFICA LAS FILAS Y LAS COLUMNAS,EN LOS PRIMEROS COLCHETES SE ESPECIFICA 
LAS FILAS Y EN LOS SEGUNDOS CORCHETES SE ESPECIFICA LAS COLUMNAS.
MATRIZ m x n, DONDE m ES IGUAL AL NUMERO DE FILAS Y m IGUAL AL NUMERO DE COLUMNAS:
matriz de 3 x 4 ejemplo:

         columna 0  columna 1  columna 2  columna 3
fila 0  | a[0][0]  | a[0][1]  | a[0][2]  | a[0][3]  |
fila 1  | a[1][0]  | a[1][1]  | a[1][2]  | a[1][3]  |
fila 2  | a[2][0]  | a[2][1]  | a[2][2]  | a[2][3]  |
*/

int main() {

    int matriz[3][4]; //declaramos matriz de 3 filas y 4 columnas
    int fila = 0, columna = 0;

    // llenamos la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese los valores para la posicion " << i << " " << j << ": ";
            cin>> matriz[i][j];            
        }
    }

    //mostrar matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return EXIT_SUCCESS;

}