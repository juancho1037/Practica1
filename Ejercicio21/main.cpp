/*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void Conversion(char *letra);

int main()
{
    char *letra=NULL, l=' ';
    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa una letra porfavor: ";
    cin>>l;
    letra = new char;
    letra = &l;
    cout<<endl;

    Conversion(letra);
    cout<<endl;

    delete letra;

    return 0;
}

void Conversion(char *letra){
    if (*letra>96) {
        if (*letra<123) {
            *letra = toupper(*letra);
            cout<<" ......::::: Letra convertida "<<*letra<<endl;
        }
    }
    else {
        if (*letra>64) {
            if(*letra<91)
                *letra = tolower(*letra);
                cout<<" ......::::: Letra convertida "<<*letra<<endl;
        }
    }
}
