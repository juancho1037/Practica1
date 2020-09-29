/*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
*/

#include <iostream>

using namespace std;

void Promedio(unsigned short int *dato);

int main()
{
    unsigned short int N=0, *dato=NULL;
    cout <<endl;
    cout << "           ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Promedio de los numeros ingresados con stop 0 :::..."<<endl<<endl;
    cout << " ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;
    dato = &N;

    Promedio(dato);

    return 0;
}

void Promedio(unsigned short int *dato){

    unsigned short int prom = 0, cont = 0;
    unsigned short int *promedio=NULL;
    promedio = &prom;

    while (*dato != 0) {
        *promedio = *promedio+*dato;
        cout<<"                             Ingresa otro numero: ";
        cin>>*dato;
        cont ++;
    }
    if (*dato == 0) {
        *promedio = *promedio/cont;
        cout<<endl;
        cout<<"                                  El promedio es: "<<*promedio<<endl;
    }

}
