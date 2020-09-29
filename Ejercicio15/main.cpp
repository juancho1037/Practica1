/*
Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
*/

#include <iostream>
#define valor 0
#define limite 65535

void SumaDatos(unsigned short int N);

using namespace std;

int main()
{
    unsigned short int N=0;
    cout <<endl;
    cout << "         ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout << "...::: Impresion de numeros enteros con stop 0 :::..."<<endl<<endl;
    cout<<endl;
    cout << "....::: Ingresa el numero deseado menor a 65535: ";
    cin>>N;

    SumaDatos(N);

    return 0;
}

void SumaDatos(unsigned short int N){
    unsigned short int sumatoria=0;

    while (N !=valor || N<limite) {
        sumatoria = sumatoria+N;
        cout<<"                             Ingresa otro numero: ";
        cin>>N;
        if (N == valor) {
            cout<<" El Resultado de la sumatoria es: "<<sumatoria<<endl;
        }
    }
}


