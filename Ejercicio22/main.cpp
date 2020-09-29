/*Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37
*/

#include <iostream>
#include <stdlib.h>

#define conv 0.000277778

using namespace std;

void FormatoH(unsigned short int *Segundos);

unsigned short int *Horas=NULL, *Minutos=NULL, *Segundos=NULL, ho=0, minu=0, seg=0 ;

int main()
{
    //Reserva de Memoria
    Segundos = new unsigned short int;
    Segundos = &seg;

    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero deseado menor a 65535: ";
    cin>>*Segundos;
    cout<<endl;

    FormatoH(Segundos);
    cout<<endl;

    delete Segundos;
    delete Minutos;
    delete Horas;

    return 0;
}

void FormatoH(unsigned short int *Segundos){

    Horas = new unsigned short int;
    Minutos = new unsigned short int;
    Horas = &ho;
    Minutos = &minu;

    *Horas = *Segundos*conv;

    while (*Segundos>=60) {
        *Segundos = *Segundos-60;
        *Minutos+=1;
        if (*Minutos>=60)
            *Minutos = *Minutos-60;
    }
    cout<<"              ......::::::: "<<*Horas<<":"<<*Minutos<<":"<<*Segundos<<endl;
}
