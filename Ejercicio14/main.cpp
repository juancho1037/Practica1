/*Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48
*/

#define limite 51

#include <iostream>
#include <iomanip>
using std::setw;

using namespace std;

void Impresion();

int main()
{
    cout<<endl;
    cout << "...::: IMPRESION DE DOS COLUMNAS :::..."<<endl<<endl;
    Impresion();
    cout<<endl;
    return 0;
}

void Impresion(){

    int *inicio=NULL, *final=NULL, ini=1, fin=50;
    inicio = &ini;
    final = &fin;

    while (*inicio<limite) {
        if (*inicio<=9) {
            cout<<setw(13);
            cout<<*inicio<<setw(13);
            *inicio += 1;
            cout<<*final<<endl;
            *final -=1;
        }else {
            cout<<setw(13);
            cout<<*inicio<<setw(13);
            *inicio +=1;
            cout<<*final<<endl;
            *final -=1;
        }
    }
}
