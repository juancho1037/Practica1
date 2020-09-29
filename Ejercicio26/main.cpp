/*Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles,
equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void VerificarMedidas(int *ladoA, int *LadoB, int *ladoC);

int *ladoA=NULL,  *ladoB=NULL, *ladoC=NULL, A=0,B=0,C=0;

int main()
{
    ladoA = new int;
    ladoB = new int;
    ladoC = new int;

    ladoA = &A;
    ladoB = &B;
    ladoC = &C;

    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el primer lado: ";cin>>*ladoA;cout<<endl;
    cout << " ....::: Ingresa el segundo lado: ";cin>>*ladoB;cout<<endl;
    cout << " ....::: Ingresa el tercer lado: ";cin>>*ladoC;cout<<endl;

    VerificarMedidas(ladoA,ladoB,ladoC);
    cout<<endl;

    delete ladoA;
    delete ladoB;
    delete ladoC;

    return 0;
}

void VerificarMedidas(int *ladoA, int *LadoB, int *ladoC){

    if((*ladoA+*LadoB)<=*ladoC){
        cout<<endl;
        cout<<"...::: Las longitudes ingresadas no forman un triangulo."<<endl;
    }
    else if (*ladoA == *LadoB && *LadoB == *ladoC){
        cout<<endl;
        cout<<"...::: Se forma un triangulo equilatero."<<endl;
    }
    else if (*ladoA == *LadoB || *LadoB == *ladoC || *ladoC == *ladoA) {
        cout<<endl;
        cout<<"...::: Se forma un triangulo isoceles."<<endl;
    }
    else{
        cout<<endl;
        cout<<"...::: Se forma un triangulo escaleno."<<endl;
    }
}
