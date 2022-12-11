#include "Angiospermas.hpp"
#include "Briofitas.hpp"
#include "Gimnospermas.hpp"
#include "Jardim.hpp"
#include "Planta.hpp"
#include "Pteridofitas.hpp"
#include <iostream>
using namespace std;

int main() {
  Jardim *jardim = new Jardim();
  while (true) {
    int opcao;
    cout << "--------------------------" << endl;
    cout << "[1]Cadatrar              " << endl;
    cout << "[2]Buscar                " << endl;
    cout << "[3]Editar                " << endl;
    cout << "[4]Exibir                " << endl;
    cout << "[5]Guardar               " << endl;
    cout << "[6]Relatório p/ Extinção " << endl;
    cout << "[7]Relatório p/ Ambiente " << endl;
    cout << "--------------------------" << endl;
    cin >> opcao;

    if (opcao == 1) {
      int escolha;
      cout << "Cadastrar Briofitas[0], Pteridofitas[1], Angiospermas[2], "
              "Gimnospermas[3]"
           << endl;
      cin >> escolha;
      if (escolha == 0) { // Briofitas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FilosBrio;
        bool Talosas;
        bool Folhosas;

        Briofitas *plantinha1 = new Briofitas();
        cout << "Digite Especie: " << endl;
        cin >> Especie;
        plantinha1->setEspecie(Especie);
        cout << "Esse tipo de planta realiza Fotossintese?: " << endl;
        cin >> Fotossintese;
        plantinha1->setFotossintese(Fotossintese);
        cout << "Qual o Habitat?: " << endl;
        cin >> Habitat;
        plantinha1->setHabitat(Habitat);
        cout << "Qual o Ciclo da Planta?: " << endl;
        cin >> Ciclo;
        plantinha1->setCiclo(Ciclo);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FilosBrio;
        plantinha1->setFilosBrio(FilosBrio);
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha1->setAmeaca(Ameaca);
        cout << "Está Briofita é Talosas? Sim[1] ou Não[0]  " << endl;
        cin >> Talosas;
        plantinha1->setTalosas(Talosas);
        cout << "Está Briofita é Folhosas? Sim[1] ou Não[0]: " << endl;
        cin >> Folhosas;
        plantinha1->setFolhosas(Folhosas);

        jardim->adicionar(plantinha1);

      } else if (escolha == 1) { // Pteriodofitas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FiloPterio;
        string Esporos;

        Pteriodofitas *plantinha2 = new Pteriodofitas();
        cout << "Digite Especie: " << endl;
        cin >> Especie;
        plantinha2->setEspecie(Especie);
        cout << "Esse tipo de planta realiza Fotossintese?: " << endl;
        cin >> Fotossintese;
        plantinha2->setFotossintese(Fotossintese);
        cout << "Qual o Habitat?: " << endl;
        cin >> Habitat;
        plantinha2->setHabitat(Habitat);
        cout << "Qual o Ciclo da Planta?: " << endl;
        cin >> Ciclo;
        plantinha2->setCiclo(Ciclo);
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha2->setAmeaca(Ameaca);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FiloPterio;
        plantinha2->setFiloPterio(FiloPterio);
        cout << "Qual o seu tipo de Esporos?:  " << endl;
        cin >> Esporos;
        plantinha2->setEsporos(Esporos);

        //jardim->adicionar(plantinha2);

      } else if (escolha == 2) { // Angiospermas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FiloAngios;
        string Frutos;

        Angiospermas *plantinha3 = new Angiospermas();
        cout << "Digite Especie: " << endl;
        cin >> Especie;
        plantinha3->setEspecie(Especie);
        cout << "Esse tipo de planta realiza Fotossintese?: " << endl;
        cin >> Fotossintese;
        plantinha3->setFotossintese(Fotossintese);
        cout << "Qual o Habitat?: " << endl;
        cin >> Habitat;
        plantinha3->setHabitat(Habitat);
        cout << "Qual o Ciclo da Planta?: " << endl;
        cin >> Ciclo;
        plantinha3->setCiclo(Ciclo);
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha3->setAmeaca(Ameaca);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FiloAngios;
        plantinha3->setFilosAngios(FiloAngios);
        cout << "Qual o seu tipo de fruto?: " << endl;
        cin >> Frutos;
        plantinha3->setFrutos(Frutos);

        jardim->adicionar(plantinha3);

      } else if (escolha == 3) { // Gimnospermas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FilosGimnos;

        Gimnospermas *plantinha4 = new Gimnospermas();
        cout << "Digite Especie: " << endl;
        cin >> Especie;
        plantinha4->setEspecie(Especie);
        cout << "Esse tipo de planta realiza Fotossintese?: " << endl;
        cin >> Fotossintese;
        plantinha4->setFotossintese(Fotossintese);
        cout << "Qual o Habitat?: " << endl;
        cin >> Habitat;
        plantinha4->setHabitat(Habitat);
        cout << "Qual o Ciclo da Planta?: " << endl;
        cin >> Ciclo;
        plantinha4->setCiclo(Ciclo);
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha4->setAmeaca(Ameaca);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FilosGimnos;

        jardim->adicionar(plantinha4);
      }
    }
  }

  return 0;
}