#include <iostream>
#include <string>
using namespace std;

string nome1;
string nome2;
string nome3;

int id1, id2, id3;
char op[3];
main(){
    setlocale(LC_ALL, "");

    do{

        cout << "Digite o nome e a idade da primeira pessoa, respectivamente: " << endl;
        cin.ignore();
        getline(cin, nome1);
        cin >> id1;

        cout << "Digite o nome e a idade da segunda pessoa, respectivamente: " << endl;
        cin.ignore();
        getline(cin, nome2);
        cin >> id2;

        cout << "Digite o nome e a idade da terceira pessoa, respectivamente: " << endl;
        cin.ignore();
        getline(cin, nome3);
        cin >> id3;

        if(id1>id2 && id1>id3)
            cout << "A pessoa mais velha é " << nome1 << "  com " << id1 << " anos " << endl;
        else 
            if(id2>id1 && id2>id3)
                cout << "A pessoa mais velha é " << nome2 << "  com " << id2 << " anos " << endl;
        else 
            cout << "A pessoa mais velha é " << nome3 << "  com " << id3 << " anos " << endl;

         cout << "Deseja sair? Caso a resposta seja afirmativa digite \"sim\", caso seja negativa digite qualquer coisa..." << endl;
         cin >> op;
    }while(op[0] != 's' && op[1]!='i' && op[2]!= 'm');
}