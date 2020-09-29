/*Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5.
Ej: si se ingresa 3 se debe imprimir:
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
*/

#include <iostream>
#include <math.h>

using namespace std;

void Potencias(unsigned short int N);

int main()
{
    unsigned short int N=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero deseado: ";
    cin>>N;

    Potencias(N);

    return 0;
}

void Potencias(unsigned short int N){
    unsigned short int potencia=1, resultado=1;

    cout<<endl;

    while (N>0 && potencia<=5) {
        resultado=pow(N,potencia);
        cout <<"                            "<< N <<"^"<< potencia<< "= "<< resultado<<endl;
        potencia++;
    }
    cout<<endl;
}
