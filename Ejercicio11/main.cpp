/*
Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar
hasta 10xN.
Ej: si se ingresa 7 se debe imprimir:
1x7=7
*/

#include <iostream>

using namespace std;

void TablaM(unsigned short int N);

int main()
{
    unsigned short int N=0;
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el numero deseado: ";
    cin>>N;

    TablaM(N);

    return 0;
}

void TablaM(unsigned short int N){
    unsigned short int resultados;
    cout<<endl;
    for (int i=1; i<=10; i++){
        resultados = i*N;
        cout <<"                            "<< i << "x"<<N<<" ="<<" "<<resultados<<endl;
    }
    cout<<endl;
}
