/*
Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3
*/

#include <iostream>

using namespace std;

void NumMayor(int A, int B);

int main()
{
    int A, B;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el primer numero: ";
    cin>>A;
    cout << " ....::: Ingresa el segundo numero: ";
    cin>>B;

    NumMayor(A,B);

    return 0;
}

void NumMayor(int A, int B){
    if (A < B) {
        cout<<endl;
        cout<<" El numero "<<A<<" es menor a "<<B<<endl;
        cout<<endl;
    }
    else if (B < A){
        cout<<endl;
        cout<<" El numero "<<B<<" es menor a "<<A<<endl;
        cout<<endl;
    }
    else if (A == B){
        cout<<endl;
        cout<<" Los dos numeros "<<A<<" y "<<B<<" son iguales. "<<endl;
        cout<<endl;
    }
}
