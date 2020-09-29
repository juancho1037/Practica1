/*
Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
*/

#include <iostream>

using namespace std;

void NumMayor(int A, int B);

int main()
{
    int A=0, B=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << "...::: Verificacion de numeros, MAYOR que otro "<<endl<<endl;
    cout << " ....::: Ingresa el primer numero: ";
    cin>>A;
    cout << " ....::: Ingresa el segundo numero: ";
    cin>>B;

    NumMayor(A,B);

    return 0;
}

void NumMayor(int A, int B){
    if (A > B) {
        cout<<endl;
        cout<<" El numero "<<A<<" es mayor a "<<B<<endl;
        cout<<endl;
    }
    else if (B > A){
        cout<<endl;
        cout<<" El numero "<<B<<" es mayor a "<<A<<endl;
        cout<<endl;
    }
    else if (A == B){
        cout<<endl;
        cout<<" Los dos numeros "<<A<<" y "<<B<<" son iguales. "<<endl;
        cout<<endl;
    }
}
