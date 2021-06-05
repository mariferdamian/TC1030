#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include "Witch.h"
#include "Wizard.h"

int main(){
    
  vector<Personaje*> vectorPersonaje;
  Personaje *objetoPersonaje;

  objetoPersonaje = new Wizard();
  vectorPersonaje.push_back(objetoPersonaje);

  objetoPersonaje = new Witch();
  vectorPersonaje.push_back(objetoPersonaje);

  for (int i = 0; i < vectorPersonaje.size(); i++)
  {
    vectorPersonaje[i]->displayHouse();
  }
  vectorPersonaje[1]->addVarita();
  vectorPersonaje[1]->addPocion();
  vectorPersonaje[1]->showInventario();
    
  return 0;
}