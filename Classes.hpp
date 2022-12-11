#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
/****************************PLANTAS**********************************************/
class Planta
{
private:
  string Especie;
  string Fotossintese;
  string Habitat;
  string Ciclo;
  bool Ameaca;

public:
  // Construtor
  Planta(string Especie = "Vazio", string Fotossintese = "Vazio",
         string Habitat = "Vazio", string Ciclo = "Vazio", bool Ameaca = 0);

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

Planta::Planta(string Especie, string Fotossintese, string Habitat,
               string Ciclo, bool Ameaca)
{
  this->setEspecie(Especie);
  this->setFotossintese(Fotossintese);
  this->setHabitat(Habitat);
  this->setCiclo(Ciclo);
  this->setAmeaca(Ameaca);
}

string Planta::getEspecie() { return this->Especie; }
void Planta::setEspecie(string Especie) { this->Especie = Especie; }

string Planta::getFotossintese() { return this->Fotossintese; }
void Planta::setFotossintese(string Fotossintese)
{
  this->Fotossintese = Fotossintese;
}

string Planta::getHabitat() { return this->Habitat; }
void Planta::setHabitat(string Habitat) { this->Habitat = Habitat; }

string Planta::getCiclo() { return this->Ciclo; }
void Planta::setCiclo(string Ciclo) { this->Ciclo = Ciclo; }

bool Planta::getAmeaca() { return this->Ameaca; }
void Planta::setAmeaca(bool Ameaca) { this->Ameaca = Ameaca; }

void Planta::Exibir()
{
  cout << "--------------------------------------------" << endl;
  cout << "Espécie: " << this->getEspecie() << endl;
  cout << "Fotossintese: " << this->getFotossintese() << endl;
  cout << "Habitat: " << this->getHabitat() << endl;
  cout << "Ciclo: " << this->getCiclo() << endl;
  cout << "Ameaça: " << this->getAmeaca() << endl;
  cout << "--------------------------------------------" << endl;
}

/****************************GIMNOSPERMAS**********************************************/
class Gimnospermas : public Planta
{
private:
  string FilosGimnos;

public:
  // Construtor
  Gimnospermas(string FilosGimnos = "Vazio");

  void Exibir() override;
  string getFilosGimnos();
  void setFilosGimnos(string Filo);
};

Gimnospermas::Gimnospermas(string FilosGimnos)
{
  this->setFilosGimnos(FilosGimnos);
}

void Gimnospermas::Exibir()
{
  cout << "--------------------------------------------" << endl;
  cout << "Espécie: " << this->getEspecie() << endl;
  cout << "Fotossintese: " << this->getFotossintese() << endl;
  cout << "Habitat: " << this->getHabitat() << endl;
  cout << "Ciclo Reprodutivo: " << this->getCiclo() << endl;
  cout << "Ameaça: " << this->getAmeaca() << endl;
  cout << "Filo: " << this->getFilosGimnos() << endl;
  cout << "--------------------------------------------" << endl;
}

string Gimnospermas::getFilosGimnos() { return this->FilosGimnos; }
void Gimnospermas::setFilosGimnos(string Filo) { this->FilosGimnos = Filo; }

/****************************PTERIDOFITAS**********************************************/
class Pteridofitas : public Planta
{
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

Pteridofitas::Pteridofitas(string FiloPterio, string Esporos)
{
  this->setFiloPterio(FiloPterio);
  this->setEsporos(Esporos);
}

void Pteridofitas::Exibir()
{
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

string Pteridofitas::getFiloPterio() { return this->FiloPterio; }

void Pteridofitas::setFiloPterio(string Filo) { this->FiloPterio = Filo; }

string Pteridofitas::getEsporos() { return this->Esporos; }

void Pteridofitas::setEsporos(string Esporos) { this->Esporos = Esporos; }

/****************************ANGIOSPERMAS**********************************************/
class Angiospermas : public Planta
{
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

Angiospermas::Angiospermas(string FiloAngios, string Frutos)
{
  this->setFilosAngios(FiloAngios);
  this->setFrutos(Frutos);
}

void Angiospermas::Exibir()
{
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

string Angiospermas::getFilosAngios() { return this->FiloAngios; }
void Angiospermas::setFilosAngios(string Filo) { this->FiloAngios = Filo; }

string Angiospermas::getFrutos() { return this->Frutos; }
void Angiospermas::setFrutos(string Fruto) { this->Frutos = Fruto; }

/****************************BRIOFITAS**********************************************/
class Briofitas : public Planta
{
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

Briofitas::Briofitas(string FilosBrio, bool Talosas, bool Folhosas)
{
  this->setFilosBrio(FilosBrio);
  this->setTalosas(Talosas);
  this->setFolhosas(Folhosas);
}

void Briofitas::Exibir()
{
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

string Briofitas::getFilosBrio() { return this->FilosBrio; }
void Briofitas::setFilosBrio(string Filo) { this->FilosBrio = Filo; }

bool Briofitas::getTalosas() { return this->Talosas; }
void Briofitas::setTalosas(bool Talosas) { this->Talosas = Talosas; }

bool Briofitas::getFolhosas() { return this->Folhosas; }
void Briofitas::setFolhosas(bool Folhosas) { this->Folhosas = Folhosas; }

class Jardim
{
private:
  vector<Briofitas *> jardimbriofitas;
  vector<Gimnospermas *> jardimgimnospermas;
  vector<Angiospermas *> jardimangiospermas;
  vector<Pteridofitas *> jardimpteridofitas;

public:
  Jardim();

  void gerarRelatorioBriofitas();
  void gerarRelatorioPteridofitas();
  void gerarRelatoriAngiospermas();
  void gerarRelatorioGimnospermas();

  void mostrar(int tipo);
  void adicionar(Pteridofitas *planta);
  void adicionar(Briofitas *planta);
  void adicionar(Gimnospermas *planta);
  void adicionar(Angiospermas *planta);
};

Jardim::Jardim() {}

/****************************ADICIONAR**********************************************/

void Jardim::adicionar(Pteridofitas *planta)
{
  jardimpteridofitas.push_back(planta);
}
void Jardim::adicionar(Briofitas *planta) { jardimbriofitas.push_back(planta); }
void Jardim::adicionar(Gimnospermas *planta)
{
  jardimgimnospermas.push_back(planta);
}
void Jardim::adicionar(Angiospermas *planta)
{
  jardimangiospermas.push_back(planta);
}
/****************************MOSTRAR**********************************************/
void Jardim::mostrar(int tipo)
{
  if (tipo == 0)
  {
    for (int i = 0; i < jardimbriofitas.size(); i++)
    {
      jardimbriofitas[i]->Exibir();
    }
  }
  else if (tipo == 1)
  {
    for (int i = 0; i < jardimpteridofitas.size(); i++)
    {
      jardimpteridofitas[i]->Exibir();
    }
  }
  else if (tipo == 2)
  {
    for (int i = 0; i < jardimangiospermas.size(); i++)
    {
      jardimangiospermas[i]->Exibir();
    }
  }
  else if (tipo == 3)
  {
    for (int i = 0; i < jardimgimnospermas.size(); i++)
    {
      jardimgimnospermas[i]->Exibir();
    }
  }
}

/****************************GERAR RELATORIO ANGIOSPERMAS**********************************************/
void Jardim::gerarRelatoriAngiospermas()
{
  ofstream arq;

  arq.open("relatorioAngiospermas.txt", ios::app);

  for (int i = 0; i < jardimangiospermas.size(); i++)
  {
    arq << "--------------------------------------------" << endl;
    arq << "Espécie: " << jardimangiospermas[i]->getEspecie() << endl;
    arq << "Fotossintese: " << jardimangiospermas[i]->getFotossintese() << endl;
    arq << "Habitat: " << jardimangiospermas[i]->getHabitat() << endl;
    arq << "Ciclo: " << jardimangiospermas[i]->getCiclo() << endl;
    arq << "Ameaça: " << jardimangiospermas[i]->getAmeaca() << endl;
    arq << "Filo: " << jardimangiospermas[i]->getFilosAngios() << endl;
    arq << "Fruto: " << jardimangiospermas[i]->getFrutos() << endl;
    arq << "--------------------------------------------" << endl;
  }
  arq.close();
}

/****************************GERAR RELATORIO BRIÓFITAS**********************************************/

void Jardim::gerarRelatorioBriofitas()
{
  ofstream arq;

  arq.open("relatorioBriofitas.txt", ios::app);

  for (int i = 0; i < jardimbriofitas.size(); i++)
  {
    arq << "--------------------------------------------" << endl;
    arq << "Espécie: " << jardimbriofitas[i]->getEspecie() << endl;
    arq << "Fotossintese: " << jardimbriofitas[i]->getFotossintese() << endl;
    arq << "Habitat: " << jardimbriofitas[i]->getHabitat() << endl;
    arq << "Ciclo: " << jardimbriofitas[i]->getCiclo() << endl;
    arq << "Ameaça: " << jardimbriofitas[i]->getAmeaca() << endl;
    arq << "Filo: " << jardimbriofitas[i]->getFilosBrio() << endl;
    arq << "Talosas: " << jardimbriofitas[i]->getTalosas() << endl;
    arq << "Folhosas: " << jardimbriofitas[i]->getFolhosas() << endl;
    arq << "--------------------------------------------" << endl;
  }
  arq.close();
}

/****************************GERAR RELATORIO GIMNOSPERMAS**********************************************/

void Jardim::gerarRelatorioGimnospermas()
{
  ofstream arq;

  arq.open("relatorioGimnospermas.txt", ios::app);

  for (int i = 0; i < jardimgimnospermas.size(); i++)
  {
    arq << "--------------------------------------------" << endl;
    arq << "Espécie: " << jardimgimnospermas[i]->getEspecie() << endl;
    arq << "Fotossintese: " << jardimgimnospermas[i]->getFotossintese() << endl;
    arq << "Habitat: " << jardimgimnospermas[i]->getHabitat() << endl;
    arq << "Ciclo: " << jardimgimnospermas[i]->getCiclo() << endl;
    arq << "Ameaça: " << jardimgimnospermas[i]->getAmeaca() << endl;
    arq << "Filo: " << jardimgimnospermas[i]->getFilosGimnos() << endl;
    arq << "--------------------------------------------" << endl;
  }
  arq.close();
}
/****************************GERAR RELATORIO PTERIDÓFITAS**********************************************/

void Jardim::gerarRelatorioPteridofitas()
{
  ofstream arq;

  arq.open("relatorioPteridofitas.txt", ios::app);

  for (int i = 0; i < jardimpteridofitas.size(); i++)
  {
    arq << "--------------------------------------------" << endl;
    arq << "Espécie: " << jardimpteridofitas[i]->getEspecie() << endl;
    arq << "Fotossintese: " << jardimpteridofitas[i]->getFotossintese() << endl;
    arq << "Habitat: " << jardimpteridofitas[i]->getHabitat() << endl;
    arq << "Ciclo: " << jardimpteridofitas[i]->getCiclo() << endl;
    arq << "Ameaça: " << jardimpteridofitas[i]->getAmeaca() << endl;
    arq << "Filo: " << jardimpteridofitas[i]->getFiloPterio() << endl;
    arq << "Esporos: " << jardimpteridofitas[i]->getEsporos() << endl;
    arq << "--------------------------------------------" << endl;
  }
  arq.close();
}