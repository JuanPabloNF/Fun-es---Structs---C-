#include <iostream>

using namespace std;

    void categoriaNadador (int idade) {
        if (idade >= 5 && idade <= 7) {
            cout << "Categoria Infatil A" << endl;
        }
        else if (idade >= 8 && idade <= 10) {
            cout << "Categoria Infatil B" << endl;
        }
        else if (idade >= 11 && idade <= 13) {
            cout << "Categoria Juvenil A" << endl;
        }
        else if (idade >= 14 && idade <= 17) {
            cout << "Categoria Juvenil B" << endl;
        }
        else if (idade >= 18) {
            cout << "Categoria Adulto" << endl;
        }
        else {
            cout << "Idade fora da faixa etaria para competicao" << endl;
        }
    }


int main(){

        int idade;

        cout << "Digite a idade do nadador: " << endl;
        cin >> idade;

        categoriaNadador(idade);

    return 0;
}
