#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// Crie um vetor com 5 pre�os de produtos e exiba todos os pre�os.

int main() {

    int vArrayPreco[5];

    setlocale(LC_CTYPE, "PORTUGUESE");

    for (int i = 0; i <= 5; i++) {
        cout << "Informe 5 pre�oes de produtos: ";
        cin >> vArrayPreco[i];
    }

    system("pause");
    system("CLS");

    cout << "Vetor de Pre�os";
    cout << "\n";
    for (int i = 0; i <= 5; i++) {
        cout << vArrayPreco[i] << " ";
    }

    cout << "\n";
    system("pause");
    return 0;
}
