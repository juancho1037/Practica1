/*Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.
*/

#include <iostream>
#include <math.h>

using namespace std;

void Perfecto(unsigned short int *dato);

int main()
{
    unsigned short int N=0, *dato=NULL;
    cout <<endl;
    cout << "          ........::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout << "        ...::: Cuadrado perfecto de un numero :::..."<<endl<<endl;
    cout<<endl;
    cout << "   ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;
    dato = &N;
    cout<<endl;

    Perfecto(dato);
    cout<<endl;

    return 0;
}

void Perfecto(unsigned short int *dato){
    unsigned short int r=0;
    unsigned short int *raiz=NULL;
    raiz = &r;

    *raiz = pow(*dato,0.5);
    *raiz = (*raiz)*(*raiz);

   if (*dato == *raiz) {
       cout<<" ..........::::: "<<*dato<<" SI es cuadrado perfecto. "<<endl;
   }
   else {
       cout<<" ..........::::: "<<*dato<<" NO es cuadrado perfecto. "<<endl;
   }
}
