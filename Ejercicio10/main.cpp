/*Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos
de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100:
33
66
99
*/

#include <iostream>

using namespace std;

void Multiplos(unsigned short int N);

int main()
{
    unsigned short int N=0;
    cout <<endl;
    cout << "      ......:::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Multiplos menores que 100 de un numero "<<endl<<endl;
    cout << "    ....::: Ingresa el numero deseado: ";
    cin>>N;

    Multiplos(N);

    return 0;
}

void Multiplos(unsigned short int N){
    cout << "Los multiplos de "<< N << " menores que 100 son: "<<endl;
    for (int i=N; i<=100; i++){
        if (i%N == 0){
            cout <<"                                        "<< i << endl;
        }
    }
    cout<<endl;
}
