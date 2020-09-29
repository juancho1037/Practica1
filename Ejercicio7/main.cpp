/*
Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
*/

/**/

#include <iostream>

using namespace std;

void Sumatoria(int A);

int main()
{
    int A=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero base: ";
    cin>>A;

    Sumatoria(A);

    return 0;
}

void Sumatoria(int A){
    int B = 0;
    for (int i=0;i<=A;i++) {
        B=B+i;
    }
    cout <<endl;
    cout << " ......::: La sumatoria desde 0 hasta "<<A<<" es: "<<B<<endl<<endl;
}
