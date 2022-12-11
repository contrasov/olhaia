#include "Classes.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Jardim {
private:
  vector<Briofitas *> jardimbriofitas;
  vector<Gimnospermas *> jardimgimnospermas;
  vector<Angiospermas *> jardimangiospermas;
  vector<Pteridofitas *> jardimpteridofitas;

public:
  Jardim();
  void adicionar(Pteridofitas *planta);
  void adicionar(Briofitas *planta);
  void adicionar(Gimnospermas *planta);
  void adicionar(Angiospermas *planta);
};

Jardim::Jardim() {}

void Jardim::adicionar(Pteridofitas *planta){
  jardimpteridofitas.push_back(planta);
}
void Jardim::adicionar(Briofitas *planta) { 
  jardimbriofitas.push_back(planta); }
void Jardim::adicionar(Gimnospermas *planta) {
  jardimgimnospermas.push_back(planta);
}
void Jardim::adicionar(Angiospermas *planta) {
  jardimangiospermas.push_back(planta);
}

