/*
 * Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2
*/

#include <iostream>

using namespace std;

void Redondeo(float a, float b);

int main()
{
    float n1=0, n2=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el primer numero: ";
    cin>>n1;
    cout << " ....::: Ingresa el segundo numero: ";
    cin>>n2;

    Redondeo(n1,n2);

    return 0;
}

void Redondeo(float n1, float n2){

    float r=0, divReal=0, comparador=0.5;
    int divEntera;

    divReal = n1/n2;
    divEntera = n1/n2;
    r = divReal - divEntera;

    if(r >= comparador){
        divEntera += 1;
        cout<<endl;
        cout<<" La division de "<<n1<<"/"<<n2<<" con redondeo es: "<<divEntera<<endl;
    }
    else if (r <= comparador) {
        cout<<endl;
        cout<<" La division de "<<n1<<"/"<<n2<<" con redondeo es: "<<divEntera<<endl;
    }
}
