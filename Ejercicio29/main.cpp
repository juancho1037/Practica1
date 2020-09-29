/*
Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos '>', '<' y '=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void Busqueda(char *opcion);

unsigned short int *n=NULL, N=0, *maxi=NULL, *mini=NULL, MAX=101, MIN=1;
char *opcion=NULL, OP=0;

int main()
{
    n= new unsigned short int; mini = new unsigned short int; maxi = new unsigned short int;
    n=&N;
    mini=&MIN;
    maxi=&MAX;

    opcion = new char;
    opcion = &OP;

    cout <<endl;
    cout << "                ......::: HOLA SEBASTIAN :::.........."<<endl<<endl<<endl;
    cout<< "......:::: ES HORA DE AVININAR EL NUMERO QUE ESTAS PENSANDO :::::..... "<<endl<<endl;

    cout<< "        .........::::::: ESTAS LISTO ??????? ::::::........."<<endl<<endl;

    srand(time(0));
    *n =(MIN)+rand()%(MAX-MIN);

    cout<<"  ....:::: El numero que pensaste, acaso sera: "<<*n<<"???"<<endl<<endl;
    cout<<"          ...:::: Es mayor, menor o igual ???: ";cin>>OP; cout<<endl;

    Busqueda(opcion);

    delete n; delete mini; delete maxi; delete opcion;

    cout <<endl;
    return 0;
}

void Busqueda(char *opcion){

    while (*opcion != '=') {
        if (*opcion == '<') *maxi=*n;
        else *mini = *n+1;

        srand(time(0));
        *n=*mini+rand()%(*maxi-*mini);
        cout<<"  ....:::: El numero que pensaste, acaso sera: "<<*n<<"???"<<endl<<endl;
        cout<<"          ...:::: Es mayor, menor o igual ???: ";cin>>OP; cout<<endl;
    }
    cout<<" .......::::: EURECA, EL NUMERO QUE PENSASTE ES: "<<*n<<endl;
}
