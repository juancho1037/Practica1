/*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
*/

#include <iostream>

using namespace std;

void Mayor(unsigned short int *dato);

int main()
{
    unsigned short int N=0, *dato=NULL;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;
    dato = &N;
    cout<<endl;

    Mayor(dato);
    cout<<endl;

    return 0;
}

void Mayor(unsigned short int *dato){
    unsigned short int num =0;
    unsigned short int *mayor=NULL;
    mayor = &num;

    while (*dato != 0) {
        if (*dato > *mayor) {
            *mayor = *dato;
        }
        cout<<"                             Ingresa otro numero: ";
        cin>>*dato;
    }
    if (*dato==0) {
        cout<<"                             El numero mayor fue: "<<*mayor<<endl;
    }
}
