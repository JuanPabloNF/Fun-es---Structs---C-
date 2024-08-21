//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.

#include <iostream>

using namespace std;

        int converteIdadeParaDias (int dias, int meses, int anos) {
            int totalDias = 0;

            totalDias += anos * 365;
            totalDias += meses * 30;
            totalDias += dias;

            return totalDias;
        }

int main(){

            int anos, meses, dias;
            int IdadeEmDias;

            cout << "Digite sua idade em anos: " << endl;
            cin >> anos;

            cout << "Digite os meses: " << endl;
            cin >> meses;

            cout << "Digite os dias: " << endl;
            cin >> dias;

            IdadeEmDias = converteIdadeParaDias(anos, meses, dias);

            cout << "A idade em dias é: " << IdadeEmDias << endl;



    return 0;
}
