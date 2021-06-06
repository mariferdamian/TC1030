

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "dog.h"
#include "cat.h"
#include "chicken.h"
#include "Room.h"

void pregunta(string *action, string *subject){
    string instruccion;
    std::cout << ">>>> ";
    std::getline(std::cin, instruccion);
    std::stringstream sstr(instruccion);
    sstr >> *action;
    sstr >> *subject;
    sstr.ignore();
    
}


int main() {

    string tipoAnimalito = "";
    std::string instruccion, action, subject;

    Dog perro(true, "cachorrino fino", "Bulldog");
    Cat gato(true, "misifu", "Angora");
    Chicken poio(false, "Chiken little", "Dancer");

    

    perro.Pet();
    perro.addItemGema("Ruby", "Una gema carmesí muy bonita que te da vida en 1", 1);
    perro.addItemPotion("Awita", "Te ayudara a contestar una pregunta", 15);
    perro.showInventory();
    
    
    cout <<"Inventario Room ...."<<endl;
    Room sala("sala", "en esta sala descansas");
    sala.addItemGem("esmeralda","sirve para buena suerte",200);
    sala.addItemKey("llave","abre la puerta de salida", 3);
    sala.showInventoryRoom();
    
    cout<<"\n \n ¿Qué quieres hacer? \n puedes entrar a: \n sala" <<endl;
    
    pregunta(&action, &subject);

    cout<<action<<endl;
    cout<<subject<<endl;


    if ("entrar" == action && "sala" == subject) {
        cout << "\n \n ---------------------"<<endl;
        cout << "Entraste al mundo de la sala. Se dice que hace muchos anios vino Tanos y acabo con todo. "<<endl;
        cout << "Pero pudo haber olvidado algo. Eso lo deberas descubir con una ACTION mostrar items." <<endl;
        
    
        pregunta(&action, &subject);

        cout<<"Esto me regresó "<<action<<" "<<subject<<endl;
        if ("mostrar" == action && "items" == subject){
            cout <<"\n ----------------------"<<endl;
            cout <<"Eres curioso y ambisioso, quieres llevarte lo que hay aqui. OK, la ACTION tomar te permitira hacerlo"<<endl;
            cout <<"\nEsto olvido llevarse el maldito Tanos ..."<<endl;

            sala.showInventoryRoom();

            pregunta(&action, &subject);

            cout <<"\n ----------------------"<<endl;
            perro.addItemKey(subject,"del cuatro de thanos",200); // increase 200 live

            perro.showInventory();
            
        }

    }
    return 0;
}

