
#include<iostream>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"
#include "ejercicio5.h"
#include "ejercicio6.h"
using namespace std;

void imprimirArray(int array[], int tam)
{
    for(int i = 0; i < tam; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
// ejercicio 1.
/*
    int A[5] = {1,2,3,4,5};
    cout << "suma It : " << sumaArrayIt(A, 5) << endl;
    cout << "suma Rec: " << sumaArrayRec(A, 5) << endl;
*/

// ejercicio 2.
/*
    int A[5] = {1,2,3,4,5};
    invertirArrayIt(A,5);
    imprimirArray(A, 5);

    int B[5] = {13, 14, 15, 16, 17};
    invertirArrayRec(B, 0, 4);
    imprimirArray(B, 5);
*/

// ejercicio 3.
/*
    int A[8] = {15,12,13,14,19,11,16,10};
    quick(A, 0, 7);
    imprimirArray(A, 8);
*/

// ejercicio 4.
/*
    char cadena[] = "hola";
    cout << "cadena : " << cadena << endl;
    cout << "tam cadena It : " << tamCadenaIt(cadena) << endl;
    cout << "tam cadena Rec: " << tamCadenaRec(cadena, 0) << endl;
*/

// ejercicio 5.
/*
    char A[] = "dias";
    char B[] = "buenos000000";
    cout << A << endl;
    cout << B << endl;
    concatenar(A,B);
    cout << "CONCATENADO : " << B << endl;
*/

// ejercicio 6.

    char A[] = "dias";
    char B[] = "buenos000000";
    cout << A << endl;
    cout << B << endl;
    copiar(A,B);
    cout << "Copiar A en B : "<< B << endl;


    return 0;
}
