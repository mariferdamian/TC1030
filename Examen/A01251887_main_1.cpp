//
// Nombre    : Juan Pablo Montoya  
// Matrícula : A01251887    
//
// TC1030 Programacion Orientada a Objetos
// Fecha 3 de Junio del 2021
//
// Completa el siguiente codigo de C++ para que compile y ejecute correctamente
//

#include <iostream>
#include <string>

using namespace std;

#include "A01251887_dog.h"
#include "A01251887_cat.h"
#include "A01251887_chicken.h"

int main() {

    string tipoAnimalito = "";

    Dog dog(true, "cachorrino fino", "Bulldog");
    Cat cat(true, "misifu", "Angora");
    Chicken chicken(false, "Chiken little", "Dancer");

    while ("salir" != tipoAnimalito){
        cout <<"Selecciona animalito [dog, cat, chicken]: ";
        cin >> tipoAnimalito;

        if (tipoAnimalito == "dog"){
            dog.Pet();
        } else if (tipoAnimalito == "cat"){
            cat.Pet();
        } else if (tipoAnimalito == "chicken"){
            chicken.Pet();
        } else {
            cout << "  no hay un animalito "<<tipoAnimalito<<endl;
        }

    } // while

    return 0;
}

