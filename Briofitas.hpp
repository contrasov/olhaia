#include <iostream>
#include "Planta.hpp"
using namespace std;

class Briofitas : public Planta {
private:
  string FilosBrio;
  bool Talosas;
  bool Folhosas;

public:
  // Construtor
  Briofitas(string FilosBrio = "Vazio", bool Talosas = 0, bool Folhosas = 0);

  void Exibir() override;
  string getFilosBrio();
  void setFilosBrio(string Filo);
  bool getTalosas();
  void setTalosas(bool Talosas);
  bool getFolhosas();
  void setFolhosas(bool Folhosas);
};

Briofitas::Briofitas(string FilosBrio, bool Talosas, bool Folhosas){
    this->setFilosBrio(FilosBrio);
    this->setTalosas(Talosas);
    this->setFolhosas(Folhosas);
}

void Briofitas::Exibir(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Fotossintese: " << this->getFotossintese() << endl;
    cout << "Habitat: " << this->getHabitat() << endl;
    cout << "Ciclo: " << this->getCiclo() << endl;
    cout << "Ameaça: " << this->getAmeaca() << endl;
    cout << "Filo: " << this->getFilosBrio() << endl;
    cout << "Talosas: " << this->getTalosas() << endl;
    cout << "Folhosas: " << this->getFolhosas() << endl;
    cout << "--------------------------------------------" << endl;
}

string Briofitas::getFilosBrio(){
    return this->FilosBrio;
}
void Briofitas::setFilosBrio(string Filo){
    this->FilosBrio = Filo;
}

bool Briofitas::getTalosas(){
    return this->Talosas;
}
void Briofitas::setTalosas(bool Talosas){
    this->Talosas = Talosas;
}

bool Briofitas::getFolhosas(){
    return this->Folhosas;
}
void Briofitas::setFolhosas(bool Folhosas){
    this->Folhosas = Folhosas;
}