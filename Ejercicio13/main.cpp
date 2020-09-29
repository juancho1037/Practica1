/*Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4
*/

#include <iostream>

using namespace std;

void Divisores(unsigned short int N);

int main()
{
    unsigned short int N=0;
    cout <<endl;
    cout << "    ......::: HOLA SEBASTIAN :::.........."<<endl<<endl;
    cout<<endl;
    cout << "    ...::: Divisores de un numero "<<endl<<endl;
    cout << " ....::: Ingresa el numero deseado: ";
    cin>>N;
    cout<<endl;

    Divisores(N);

    return 0;
}

void Divisores(unsigned short int N){
    unsigned short int it=1, resultado=1;

    cout<<"los divisores de "<<N<<" son:"<<endl;

    while (it<=N){
        resultado=N%it;
        if (resultado==0){
            cout<<"                         "<<it<<endl;
            it++;
        }else{
            it++;
        }
    }
    cout<<endl;
}
