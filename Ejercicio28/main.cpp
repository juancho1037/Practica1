/*
Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma innita:
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3  = 4(1 􀀀 1
3 + 1
5 ) = 3;46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void GenerarAprox(float *cantidad);

float *cantidad=NULL, *formula=NULL, *aux=NULL, *x=NULL, *pi=NULL, can=1.1, form=1.1, AUX=0,X=0,PI=0;

int main()
{
    cantidad = new float; formula = new float; aux= new float; x =new float; pi=new float;

    cantidad = &can; formula = &form; aux = &AUX; x=&X; pi=&PI;

    cout <<endl;
    cout << "              .........::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "                   ...::: Aproximacion de Pi :::..."<<endl<<endl;
    cout << " ....::: Ingresa la cantidad de elementos para la aproximacion: ";cin>>can;cout<<endl;

    GenerarAprox(cantidad);
    cout <<endl;

    delete cantidad; delete formula; delete aux; delete x; delete pi;

    return 0;
}

void GenerarAprox(float *cantidad){

    for (int i=0;*cantidad>i;i++){
        *formula=(2*i)+1;
        if (*x==0) {
            *aux+=(1/(*formula));
            *x=1;}
        else {
            *aux-=(1/(*formula));
            *x=0;}
    }
   *pi=4*(*aux);
    cout<<"                 ....:::: Pi es aproximadamente: "<<*pi<<endl;
}
