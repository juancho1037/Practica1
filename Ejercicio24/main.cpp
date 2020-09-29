/*Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter '+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void Figura(unsigned short int *numero);

unsigned short int N=0, *numero=NULL;

int main()
{
    numero = new unsigned short int;
    numero = &N;

    cout <<endl;
    cout << "        .........::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Impresion de un cuadrado de tamanio deseado :::..."<<endl<<endl;
    cout << " ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>*numero;
    cout<<endl;

    Figura(numero);
    cout<<endl;

    delete numero;

    return 0;
}

void Figura(unsigned short int *numero){
    for (unsigned short int i=0;i<*numero;i++) {
        cout<<'+';
    }
    cout<<endl;
    for (unsigned short int j=0;j<*numero-2;j++) {
        cout<<'+';
        for (unsigned short int k=0;k<*numero-2;k++) {
            cout<<' ';
        }
        cout<<'+'<<endl;
    }
    for (unsigned short int i=0;i<*numero;i++) {
        cout<<'+';
    }
    cout<<endl;
}
