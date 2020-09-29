/*Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.
*/

#include <iostream>
#include <stdlib.h>
#define num 10

using namespace std;

int VerificarReflejo(unsigned short int *dato);

int *respuesta=NULL;

int main()
{
    unsigned short int N=0, *dato=NULL, reflejo=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout << "   ....::: Numero palindromo :::..."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;
    dato = &N;
    cout<<endl;

    unsigned short int copiaD=0;
    copiaD = N; //Guardamos una copia de la informacion del usuario para posterior verificacion

    reflejo=VerificarReflejo(dato);

    if (copiaD == reflejo)
        cout<<" ........::::: "<<copiaD<<" Es un numero palindromo. "<<endl;
    else
        cout<<" ........::::: "<<copiaD<<" NO es un numero palindromo. "<<endl;
    cout<<endl;

    delete respuesta;

    return 0;
}

int VerificarReflejo(unsigned short int *dato){

    int res=0;
    respuesta = new int;
    respuesta = &res;

    while (*dato>0) {
        *respuesta = *respuesta+(*dato)%num;
        *respuesta = *respuesta*num;
        *dato=*dato/num;
    }
    return *respuesta/num;
}
