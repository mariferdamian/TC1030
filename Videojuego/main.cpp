#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include "Marciano.h"
#include "Taquero.h"




int main(){
    
  vector<Personaje*> vectorPersonaje;
  Personaje *objetoPersonaje;

  objetoPersonaje = new Taquero();
  vectorPersonaje.push_back(objetoPersonaje);

  objetoPersonaje = new Marciano();
  vectorPersonaje.push_back(objetoPersonaje);

  for (int i = 0; i < vectorPersonaje.size(); i++)
  {
    vectorPersonaje[i]->mostrarLugar();
  }
  vectorPersonaje[1]->addVarita();
  vectorPersonaje[1]->addPocion();
  vectorPersonaje[1]->showInventario();
    
  return 0;
}