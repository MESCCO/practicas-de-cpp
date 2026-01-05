// Archivo: practica004.cpp
/* Escibe un programa que le la entrada estandar de dos números y
muestre en la salida estándar suma, resta, multiplicación y division.*/

#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Ingrese el primer numero: ";
    cin>>  a;

    cout<<"Ingrese el segundo numero: ";
    cin>> b;

    cout<<"Suma es: "<< a + b<<endl;
    cout<<"Multiplicacion es: "<< a * b<<endl;
    cout<<"Resta es: "<< a - b<<endl;
    if(b!=0){
        cout<<"Division es : "<< a / b<<endl;
    }
    else{
        cout<<"No Es posible la division";
    }
    return 0;
}