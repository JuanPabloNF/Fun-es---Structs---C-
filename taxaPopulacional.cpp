//Supondo que a população de um país "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento, e que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes,
//com uma taxa anual de crescimento de  1,5 porcento.
//Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de crescimento.
//O cálculo deve ser realizado por uma função separada que retorna apenas o número de  anos.


#include <iostream>

using namespace std;

    int calcularAnos (double popA, double taxaA, double popB, double taxaB) {
        int anos = 0;

        while (popA < popB) {

            popA += popA * (taxaA / 100);
            popB += popB * (taxaA / 100);

            anos++;
        }
            return anos;
    }

int main(){

        double populacaoA = 90000000;
        double taxaA = 3.0;
        double populacaoB = 200000000;
        double taxaB = 1.5;


        int anos = calcularAnos(populacaoA, taxaA, populacaoB, taxaB);

        cout << "Serao necessarios: " << anos << " anos para que a populacao A ultrapasse a populacao B" << endl;




    return 0;
}
