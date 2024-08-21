#include <iostream>

using namespace std;

    int comparação (int x, int y, int z) {
        int maior = x;

        if (y > maior) {
            maior = y;
        }

        if (z > maior) {
            maior = z;
        }

        return maior;

    }

int main(){

        int a, b, c;
        int maiorValor;

        cout << "Digite o valor A: " << endl;
        cin >> a;

        cout << "Digite o valor B: " << endl;
        cin >> b;

        cout << "Digite o valor C: " << endl;
        cin >> c;

        maiorValor = comparação(a, b, c);

        cout << "Maior valor: " << maiorValor << endl;

    return 0;
}
