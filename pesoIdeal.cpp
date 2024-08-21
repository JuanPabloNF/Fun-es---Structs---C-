//Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
//
//Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7.

#include <cstring>
#include <iostream>

using namespace std;

    double homem (double alt) {
        double peso;
        peso = 72.7 * alt - 58;
        return peso;
    }

double mulher (double alt) {
        double peso;
        peso = 62.1 * alt - 44.7;
        return peso;
    }



int main()
{
        char sexo[50];
        double altura;
        double pesoIdealHomem;
        double pesoIdealMulher;



        cout << "Digite o sexo: " << endl;
        cin.getline(sexo, sizeof(sexo));


        cout << "Digite a altura: " << endl;
        cin >> altura;


        if (strcmp(sexo, "Homem") == 0  || strcmp(sexo, "homem") == 0) {
            pesoIdealHomem = homem(altura);

        }
        else if (strcmp(sexo, "Mulher") == 0 || strcmp(sexo, "mulher") == 0) {
            pesoIdealMulher = mulher(altura);

        }else {
            cout << "Sexo inválido!" << endl;
            return 1;
        }

        cout << "Peso ideal - Homem: " << pesoIdealHomem << endl;
        cout << "Peso ideal - Mulher: " << pesoIdealMulher << endl;


    return 0;
}
