#include <iostream>
#include "Planta.hpp"
using namespace std;

class Angiospermas : public Planta {
private:
  string FiloAngios;
  string Frutos;
public:
  // Construtor
  Angiospermas(string FilosAngios = "Vazio", string Frutos = "Vazio");

  void Exibir() override;
  string getFilosAngios();
  void setFilosAngios(string Filo);
  string getFrutos();
  void setFrutos(string Fruto);
};

Angiospermas::Angiospermas(string FiloAngios, string Frutos){
    this->setFilosAngios(FiloAngios);
    this->setFrutos(Frutos);
}

void Angiospermas::Exibir(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Fotossintese: " << this->getFotossintese() << endl;
    cout << "Habitat: " << this->getHabitat() << endl;
    cout << "Ciclo: " << this->getCiclo() << endl;
    cout << "Ameaça: " << this->getAmeaca() << endl;
    cout << "Filo: " << this->getFilosAngios() << endl;
    cout << "Fruto: " << this->getFrutos() << endl;
    cout << "--------------------------------------------" << endl;
}

string Angiospermas::getFilosAngios(){
    return this->FiloAngios;
}
void Angiospermas::setFilosAngios(string Filo){
    this->FiloAngios = Filo;
}

string Angiospermas::getFrutos(){
    return this->Frutos;
}
void Angiospermas::setFrutos(string Fruto){
    this->Frutos = Fruto;
}