/**
 * ═══════════════════════════════════════════════════════════════════════
 *    Classes in C++ | Clases en C++
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    [EN] Introduction to classes and objects
 *    [ES] Introducción a clases y objetos
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * ═══════════════════════════════════════════════════════════════════════
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Person{
    private:  //Attributes | Atributos
        int age;
        string name;
    public:   //Method | Metodos
        Person(int,string); //Constructor | Constructor
        void read();
        void run();

};
//The constructor is used to initialize the attributes
//contructor, nos sirve para inicializar los atributos
Person::Person(int _age,string _name){
    age = _age;
    name= _name;
}

void Person::read(){
    cout<<"I am "<< name <<" and I'm reading a book"<<endl;
}

void Person::run(){
    cout<<"I'm "<<name <<" and I'm running a marathon and I'm "<< age <<" years old"<<endl;
}

int main(){
    Person p1 = Person(20,"Mescco");
    Person p2(19,"Nasha");
    Person p3(18,"Juan");

    p1.read();
    p2.run();

    p3.read();
    p3.run();

    system("pause");
    return 0;
}
