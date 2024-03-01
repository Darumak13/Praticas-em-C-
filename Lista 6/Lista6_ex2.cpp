#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// Calcule a m�dia dos pre�os dos produtos do vetor.

int main() {

    int vArrayPreco[5], somaPreco;
    double mediaPreco;

    setlocale(LC_CTYPE, "PORTUGUESE");

    // Inser��o dos pre�os
    for (int i = 1; i <= 5; i++) {
        cout << "Informe o pre�o do " << i << "� produto: ";
        cin >> vArrayPreco[i];
        somaPreco += vArrayPreco[i];
    }

    mediaPreco = somaPreco / 5;

    system("pause");
    system("CLS");

    // Impress�o do vetor de pre�o
    cout << "Impress�o do Vetor \n";
    for (int i = 1; i <= 5; i++) {
        cout << vArrayPreco[i] << "\t";
    }

    cout << "\n";
    system("pause");
    system("CLS");

    // M�dia dos pre�os
    cout << "A m�dia dos pre�os � = " << mediaPreco << endl;

    system("pause");
}
