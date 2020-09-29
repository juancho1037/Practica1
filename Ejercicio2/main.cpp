/*
 * Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar
 * */
#include <iostream>

using namespace std;

void verificar(int N);

int main()
{
    int N=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout << "...::: Verificacion de numeros, PAR O IMPAR "<<endl<<endl;
    cout << " Ingresa el numero que deseas verificar: ";
    cin>>N;

    verificar(N);

    return 0;
}

void verificar(int N){
    if (N%2 == 0) {
        cout<<endl;
        cout <<" El numero "<<N<<" es PAR "<<endl;
    }
    else {
        cout<<endl;
        cout <<" El numero "<<N<<" es IMPAR "<<endl;
    }
}
