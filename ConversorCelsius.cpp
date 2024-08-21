//Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius.
//O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: C=5/9.(F-32)

#include <iostream>

using namespace std;

    double calculoConversao(int f) {
        double celsius = 1;
            celsius = 5.0 / 9.0 * (f - 32);
             return celsius;
    }


int main()
{
    int fahrenheit;
    double conversao;

    cout << "Digite o valor em Fahrenheit (0 a 100 graus): " << endl;
    cin >> fahrenheit;

    while (fahrenheit > 100 || fahrenheit < 0) {
        cout << "Digite um valor entre 0 e 100!: " << endl;
        cin >> fahrenheit;
    }

    conversao = calculoConversao(fahrenheit);


        cout << "Resultado da conversão: " << conversao << endl;

    return 0;
}
