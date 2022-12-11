#include <iostream>
using namespace std;

class Pteridofitas : public Planta {
private:
  string FiloPterio;
  string Esporos;

public:
  // Construtor
  Pteridofitas(string FiloPterio = "Vazio", string Esporos = "Vazio");

  void Exibir() override;
  string getFiloPterio();
  void setFiloPterio(string Filo);
  string getEsporos();
  void setEsporos(string Esporos);
};

Pteridofitas::Pteridofitas(string FiloPterio, string Esporos){
    this->setFiloPterio(FiloPterio);
    this->setEsporos(Esporos);
}

void Pteridofitas::Exibir(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Fotossintese: " << this->getFotossintese() << endl;
    cout << "Habitat: " << this->getHabitat() << endl;
    cout << "Ciclo: " << this->getCiclo() << endl;
    cout << "Ameaça: " << this->getAmeaca() << endl;
    cout << "Filo: " << this->getFiloPterio() << endl;
    cout << "Esporos: " << this->getEsporos() << endl;
    cout << "--------------------------------------------" << endl;
}

string Pteridofitas::getFiloPterio(){
    return this->FiloPterio;
}

void Pteridofitas::setFiloPterio(string Filo){
    this->FiloPterio = Filo;
}

string Pteridofitas::getEsporos(){
    return this->Esporos;
}

void Pteridofitas::setEsporos(string Esporos){
    this->Esporos = Esporos;
}

