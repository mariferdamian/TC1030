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
#include <vector>
using namespace std;
#include "A01251887_veterinaria.h"
#include "A01251887_dog.h"
#include "A01251887_cat.h"
#include "A01251887_chicken.h"


int main() {

    // 1.- Declara un arreglo de punteros de tamaño 3 de tipo base
    
    Veterinaria* cat = new Cat(1, "hola", "hola");
    
    Veterinaria* dog = new Dog(1, "hola", "hola");
    
    Veterinaria* chicken = new Chicken(1, "hola", "hola");
    
    
    // 2.- Haz una instancia de cada clase derivada Dog, Cat, Chicken y metelas al arreglo

    vector<Veterinaria*> vet= {cat, dog, chicken};

    // 3.- Ejecuta un for para mostrar el contenido del arreglo, funcion Pet trabajando en polimorfismo

    for (int i = 0; i < vet.size(); i++) {
        vet[i]->Pet();
    }


    return 0;
}

