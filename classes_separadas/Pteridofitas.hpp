#include <iostream>
using namespace std;

class Pteriodofitas : public Planta {
private:
  string FiloPterio;
  string Esporos;

public:
  // Construtor
  Pteriodofitas(string FiloPterio = "Vazio", string Esporos = "Vazio");

  void Exibir() override;
  string getFiloPterio();
  void setFiloPterio(string Filo);
  string getEsporos();
  void setEsporos(string Esporos);
};

Pteriodofitas::Pteriodofitas(string FiloPterio, string Esporos){
    this->setFiloPterio(FiloPterio);
    this->setEsporos(Esporos);
}

void Pteriodofitas::Exibir(){
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

string Pteriodofitas::getFiloPterio(){
    return this->FiloPterio;
}

void Pteriodofitas::setFiloPterio(string Filo){
    this->FiloPterio = Filo;
}

string Pteriodofitas::getEsporos(){
    return this->Esporos;
}

void Pteriodofitas::setEsporos(string Esporos){
    this->Esporos = Esporos;
}

