/*Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void Contador(int *numero);

int N=0, *numero=NULL;

int main()
{
    numero = new int;
    numero = &N;

    cout <<endl;
    cout << "           ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Cantidad de digitos de un numero deseado :::..."<<endl<<endl;
    cout << "           ....::: Ingresa el numero deseado: ";
    cin>>*numero;
    cout<<endl;

    Contador(numero);
    cout<<endl;

    delete numero;

    return 0;
}

void Contador(int *numero){
    int digitos=0, p_entera=0;
    p_entera =*numero;

    while (p_entera >0) {
        p_entera = p_entera/10;
        digitos +=1;
    }
    cout<<"            ......::::: "<<*numero<<" tiene "<<digitos<<" digitos."<<endl;
}
