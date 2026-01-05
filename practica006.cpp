// Archivo: practica007.cpp
/* Realice un programa que lea de la entrada estándar los 
    siguientes datos de una persona:
        edad:dato entero
        sexo:dato caracter
        altura:dato real
    Tras leer los datos, el programa debe mostrarlos en la salida estándar. */

#include <iostream>
using namespace std;

int main (){
    int edad;
    char sexo[10]; //Tener en cuenta que los caracteres se le tiene que  definir el rango o la cantidad
    float altura;

    cout<<" Ingrese su Edad: ";
    cin >> edad;

    cout<<" Ingrese su Sexo : ";
    cin >> sexo;

    cout<<" Ingrese su Altura: ";
    cin >> altura;

    cout<<"Su edad es :"<< edad << "\n"
        <<"Su sexo es: "<< sexo << "\n"
        <<"Su altura es:"<< altura << endl;

    return 0;
}