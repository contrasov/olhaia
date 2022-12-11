#include <iostream>
using namespace std;

class Planta {
private:
  string Especie;
  string Fotossintese;
  string Habitat;
  string Ciclo;
  bool Ameaca;

public:
  // Construtor
  Planta(string Especie = "Vazio" ,string Fotossintese = "Vazio", string Habitat = "Vazio", string Ciclo = "Vazio", bool Ameaca = 0);

  virtual void Exibir();
  string getEspecie();
  void setEspecie(string Especie);
  string getFotossintese();
  void setFotossintese(string Fotossintese);
  string getHabitat();
  void setHabitat(string Habitat);
  string getCiclo();
  void setCiclo(string Ciclo);
  bool getAmeaca();
  void setAmeaca(bool Ameaca);
};

Planta::Planta(string Especie, string Fotossintese, string Habitat, string Ciclo, bool Ameaca){
    this->setEspecie(Especie);
    this->setFotossintese(Fotossintese);
    this->setHabitat(Habitat);
    this->setCiclo(Ciclo);
    this->setAmeaca(Ameaca);
}


string Planta::getEspecie(){
    return this->Especie;
}
void Planta::setEspecie(string Especie){
    this->Especie = Especie;
}

string Planta::getFotossintese(){
    return this->Fotossintese;
}
void Planta::setFotossintese(string Fotossintese){
    this->Fotossintese = Fotossintese;
}

string Planta::getHabitat(){
    return this->Habitat;
}
void Planta::setHabitat(string Habitat){
    this->Habitat = Habitat;
}

string Planta::getCiclo(){
    return this ->Ciclo;
}
void Planta::setCiclo(string Ciclo){
    this->Ciclo = Ciclo;
}

bool Planta::getAmeaca(){
    return this->Ameaca;
}
void Planta::setAmeaca(bool Ameaca){
    this->Ameaca = Ameaca;
}

void Planta::Exibir(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->getEspecie() << endl;
    cout << "Fotossintese: " << this->getFotossintese() << endl;
    cout << "Habitat: " << this->getHabitat() << endl;
    cout << "Ciclo: " << this->getCiclo() << endl;
    cout << "Ameaça: " << this->getAmeaca() << endl;
    cout << "--------------------------------------------" << endl;
}