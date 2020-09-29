/*
Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2
*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){

    int A=0,B=0;
    cout << endl;
    cout << "           ...::: HOLA SEBASTIAN :::... "<<endl;
    cout << "...::: Residuo de la Division de dos numeros "<<endl<<endl;
    cout << "       ...:::Ingrese el primer numero: ";
    cin>>A;
    cout<<endl;
    cout << "...:::     Ingrese el segundo numero: ";
    cin>>B;
    cout<<endl;

    cout<<"                 ...:::El residuo de "<<A<<"/"<<B<<" es: "<<A%B<<endl;

    getch();
    return 0;
}


