/*
 * Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5^3=125
}
 * */

#include <iostream>

using namespace std;

void Potencia(int base, int potencia);

int main()
{
    int A=0, B=0;
    cout <<endl;
    cout << " ........::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Potencia deseada de un numero "<<endl<<endl;
    cout << " ....::: Ingresa el numero base: ";
    cin>>A;
    cout << " ....::: Ingresa la potencia deseada: ";
    cin>>B;

    Potencia(A,B);

    return 0;
}


void Potencia(int base, int potencia){

    int resultado = 1;

    for (int i=1; i<=potencia; i++){
        resultado = resultado*base;
    }
    cout<<endl;
    cout << " ....::: El resultado es: " << resultado <<endl;
    cout<<endl;
}
