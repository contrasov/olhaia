#include "Classes.hpp"
using namespace std;

int main()
{
  Jardim *jardim = new Jardim();
  while (true)
  {
    int opcao;
    cout << "--------------------------" << endl;
    cout << "[1]Cadatrar              " << endl;
    cout << "[2]Exibir                " << endl;
    cout << "[3]Guardar               " << endl;
    cout << "[4]Relatório p/ Briofitas " << endl;
    cout << "[5]Relatório p/ Pteridofitas " << endl;
    cout << "[6]Relatório p/ Angiospermas " << endl;
    cout << "[7]Relatório p/ Gimnospermas " << endl;
    cout << "--------------------------" << endl;
    cin >> opcao;

    if (opcao == 1)
    {
      int escolha;
      cout << "Cadastrar Briofitas[0], Pteridofitas[1], Angiospermas[2], "
              "Gimnospermas[3]"
           << endl;
      cin >> escolha;
      if (escolha == 0)
      { // Briofitas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FilosBrio;
        bool Talosas;
        bool Folhosas;

        Briofitas *plantinha0 = new Briofitas();
        cout << "Digite Especie: " << endl;
        cin >> Especie;
        plantinha0->setEspecie(Especie);
        cout << "Esse tipo de planta realiza Fotossintese?: " << endl;
        cin >> Fotossintese;
        plantinha0->setFotossintese(Fotossintese);
        cout << "Qual o Habitat?: " << endl;
        cin >> Habitat;
        plantinha0->setHabitat(Habitat);
        cout << "Qual o Ciclo da Planta?: " << endl;
        cin >> Ciclo;
        plantinha0->setCiclo(Ciclo);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FilosBrio;
        plantinha0->setFilosBrio(FilosBrio);
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha0->setAmeaca(Ameaca);
        cout << "Está Briofita é Talosas? Sim[1] ou Não[0]  " << endl;
        cin >> Talosas;
        plantinha0->setTalosas(Talosas);
        cout << "Está Briofita é Folhosas? Sim[1] ou Não[0]: " << endl;
        cin >> Folhosas;
        plantinha0->setFolhosas(Folhosas);

        jardim->adicionar(plantinha0);
      }
      else if (escolha == 1)
      { // Pteridofitas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FiloPterio;
        string Esporos;

        Pteridofitas *plantinha1 = new Pteridofitas();
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
        cout << "Está ameçada? Sim[1] ou Não[0]  " << endl;
        cin >> Ameaca;
        plantinha1->setAmeaca(Ameaca);
        cout << "Qual o seu Filo?:  " << endl;
        cin >> FiloPterio;
        plantinha1->setFiloPterio(FiloPterio);
        cout << "Qual o seu tipo de Esporos?:  " << endl;
        cin >> Esporos;
        plantinha1->setEsporos(Esporos);

        jardim->adicionar(plantinha1);
      }
      else if (escolha == 2)
      { // Angiospermas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FiloAngios;
        string Frutos;

        Angiospermas *plantinha2 = new Angiospermas();
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
        cin >> FiloAngios;
        plantinha2->setFilosAngios(FiloAngios);
        cout << "Qual o seu tipo de fruto?: " << endl;
        cin >> Frutos;
        plantinha2->setFrutos(Frutos);

        jardim->adicionar(plantinha2);
      }
      else if (escolha == 3)
      { // Gimnospermas
        string Especie;
        string Fotossintese;
        string Habitat;
        string Ciclo;
        bool Ameaca;
        string FilosGimnos;

        Gimnospermas *plantinha3 = new Gimnospermas();
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
        cin >> FilosGimnos;

        jardim->adicionar(plantinha3);
      }
    }
    else if (opcao == 2)
    {
      int escolha2;
      cout << "Qual você quer Exibir?: Briofitas[0], Pteridofitas[1], "
              "Angiospermas[2], Gimnospermas[3]"
           << endl;
      cin >> escolha2;
      if (escolha2 == 0)
      {
        cout << "\n\n";
        cout << "BRIOFITAS \n\n";
        jardim->mostrar(0);
      }
      else if (escolha2 == 1)
      {
        cout << "\n\n";
        cout << "PTERIDOFITAS \n\n";
        jardim->mostrar(1);
      }
      else if (escolha2 == 2)
      {
        cout << "\n\n";
        cout << "ANGIOSPERMAS \n\n";
        jardim->mostrar(2);
      }
      else if (escolha2 == 3)
      {
        cout << "\n\n";
        cout << "GIMNOSPERMAS \n\n";
        jardim->mostrar(3);
      }
    }
    else if (opcao == 4)
    {
      jardim->gerarRelatorioBriofitas();
    }
    else if (opcao == 5)
    {
      jardim->gerarRelatorioPteridofitas();
    }
    else if (opcao == 6)
    {
      jardim->gerarRelatoriAngiospermas();
    }
    else if (opcao == 7)
    {
      jardim->gerarRelatorioGimnospermas();
    }
  }
  return 0;
}