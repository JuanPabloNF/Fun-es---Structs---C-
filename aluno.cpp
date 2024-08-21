#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

struct Aluno {
    char nome[100];
    int matricula;
};



int main()
{
   Aluno vetorAluno[50];
    int numAluno;


    cout << "Quantos alunos deseja registrar? (Limite 50): " << endl;
    cin >> numAluno;

   while (numAluno > 50) {
        cout << "Erro, limite atingido! Digite outro valor:" << endl;
        cin >> numAluno;
    }

    for (int i = 0 ; i < numAluno ; i++) {
        cin.ignore();

        cout << "Digite o nome do aluno " << i + 1 << ":" << endl;
        cin.getline(vetorAluno[i].nome, sizeof(vetorAluno[i].nome));

        int comprimento = strlen(vetorAluno[i].nome);

        if (comprimento > 100) {

           cout << "Erro, o nome digitado ultrapassou o limite de 100 caracteres!" << endl;
            return 1;

        }else {
            cout << "Digite o numero da matricula " << i + 1 << ":" << endl;
            cin >> vetorAluno[i].matricula;
        }

    }

       for (int i = 0 ; i < numAluno ; i++) {
           cout << endl;
           cout << "Aluno " << i + 1 << endl;
           cout << "Nome: " << vetorAluno[i].nome << endl;
           cout << "Matricula: " << vetorAluno[i].matricula << endl;
       }




    return 0;
}
