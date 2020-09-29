/*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void MinimoComunMultiplo(unsigned short int *numero1, unsigned short int *numero2);

unsigned short int *numero1=NULL, *numero2=NULL, n1=0, n2=0, i=2, x=1, y=1, z=1;

int main()
{
    numero1 = new unsigned short int;
    numero2 = new unsigned short int;

    numero1 = &n1;
    numero2 = &n2;

    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el primer numero menor a 65535: ";
    cin>>*numero1;
    cout<<endl;
    cout << " ....::: Ingresa el segundo numero menor a 65535: ";
    cin>>*numero2;
    cout<<endl;

    MinimoComunMultiplo(numero1,numero2);
    cout<<endl;

    delete numero1;
    delete numero2;

    return 0;
}

void MinimoComunMultiplo(unsigned short int *numero1, unsigned short int *numero2){

    if(*numero1<*numero2){
        x=*numero1;
        z=*numero2;
    }
    else {
        x=*numero2;
        z=*numero1;
    }
    do {
        if (x%i == 0){
            if (z%i == 0){
                y = y*i;
                x = x/i;
                z = z/i;
                i = 2;
            }
            else i++;
        }
        else i++;
    } while (i<=x);

    y=y*z*x;

    cout<<"        ......::::: El MCM de "<<*numero1<<" y "<<*numero2<<" es: "<<y<<endl;

}
