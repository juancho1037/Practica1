/*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int *numero_uno=NULL, *numero_dos=NULL, A=0,B=0;
char *opcion=NULL, OP='a';

void Operacion(char *opcion, int *numero_uno, int *numero_dos);

int main()
{
    numero_uno = new int;
    numero_dos = new int;
    opcion = new char;

    numero_uno = &A;
    numero_dos = &B;
    opcion = &OP;

    cout <<endl;
    cout << " ......::: Hola Sebastian :::.........."<<endl<<endl;
    cout<<endl;
    cout << " ....::: Ingresa el primer numero: ";cin>>A;cout<<endl;
    cout << " ....::: Ingresa el segundo numero: ";cin>>B;cout<<endl;
    cout << " ....::: Ingresa el signo de la operacion: ";cin>>OP;cout<<endl;

    Operacion(opcion,numero_uno,numero_dos);
    cout<<endl;

    delete numero_uno;
    delete numero_dos;
    delete opcion;

    cout << "Hello World!" << endl;
    return 0;
}

void Operacion(char *opcion,int *numero_uno, int *numero_dos){

    switch (*opcion) {

    case '+':{
        cout <<"    ...::: EL resultado es: "<<*numero_uno+*numero_dos<<endl;
        break;
    }
    case '-':{
        cout <<"    ...::: EL resultado es: "<<*numero_uno-*numero_dos<<endl;
        break;
    }
    case '*':{
        cout <<"    ...::: EL resultado es: "<<(*numero_uno)*(*numero_dos)<<endl;
        break;
    }
    case '/':{
        cout <<"    ...::: EL resultado es: "<<(*numero_uno)/(*numero_dos)<<endl;
    }
    default:{
        cout <<"...::: La operacion ingresada no es valida. "<<endl;
        break;
    }
    }
}
