/*Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
*/

#include <iostream>

using namespace std;

void Factorial(int A);

int main()
{
    int A=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << "....::: Factorial de un numero N "<<endl<<endl;
    cout << " ....::: Ingresa el numero base: ";
    cin>>A;

    Factorial(A);

    return 0;
}

void Factorial(int A){
    int B=1;
    for (int i =1;i<=A;i++) {
        B=B*i;
    }
    cout <<endl;
    cout << " ......::: "<<A<<"! es: "<<B<<endl<<endl;
}
