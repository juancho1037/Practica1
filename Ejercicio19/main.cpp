/*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.
*/

#include <iostream>

using namespace std;

void Primo(unsigned short int *dato);

int main()
{

    unsigned short int N=0, *dato=NULL;
    cout <<endl;
    cout << "             .........::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout << "...::: quieres saber si un numero es primo o no? aca te ayudamos :::..."<<endl<<endl;
    cout<<endl;
    cout << "      ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;
    dato = &N;
    cout<<endl;

    Primo(dato);
    cout<<endl;

    return 0;
}

void Primo(unsigned short int *dato){
    bool primo=true;

    for (unsigned short int i=2; i<*dato && primo == true; i++) {
        if (*dato%i ==0)
            primo = false;
    }
    if (primo == false)
        cout<<" ........::::: "<<*dato<<" NO es un numero primo. "<<endl;
    else cout<<" ........::::: "<<*dato<<" SI es un numero primo. "<<endl;
}

