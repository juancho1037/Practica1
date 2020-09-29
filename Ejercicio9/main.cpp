/*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416
*/

#include <iostream>

# define Pi 3.1416

void DatosCirculo(float radio);

using namespace std;

int main()
{
    float R;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el radio del circulo: ";
    cin>>R;
    cout<<endl;

    DatosCirculo(R);

    return 0;
}

void DatosCirculo(float radio){
    cout <<endl;
    cout << " ......::: Perimetro del circulo de Radio "<<radio<<" es: "<<radio*2*Pi<<endl<<endl;
    cout << " ......::: Area del circulo de Radio "<<radio<<" es: "<<radio*radio*Pi<<endl<<endl;
}

