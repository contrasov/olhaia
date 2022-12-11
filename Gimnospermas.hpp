#include <iostream>
#include "Planta.hpp"
using namespace std;

class Gimnospermas : public Planta {
private:
  string FilosGimnos;
public:
  // Construtor
  Gimnospermas(string FilosGimnos = "Vazio");

  void Exibir() override;
  string getFilosGimnos();
  void setFilosGimnos(string Filo);
};

Gimnospermas::Gimnospermas(string FilosGimnos){
    this->setFilosGimnos(FilosGimnos);
}

void Gimnospermas::Exibir(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Fotossintese: " << this->getFotossintese() << endl;
    cout << "Habitat: " << this->getHabitat() << endl;
    cout << "Ciclo: " << this->getCiclo() << endl;
    cout << "Ameaça: " << this->getAmeaca() << endl;
    cout << "Filo: " << this->getFilosGimnos() << endl;
    cout << "--------------------------------------------" << endl;
}

string Gimnospermas::getFilosGimnos(){
    return this->FilosGimnos;
}
void Gimnospermas::setFilosGimnos(string Filo){
    this->FilosGimnos = Filo;
}
