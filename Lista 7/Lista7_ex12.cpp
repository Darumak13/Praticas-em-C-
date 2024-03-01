#include "testeLibrary.h"

// 12. Faça um programa que carregue:
// a. Um vetor de oito posições com os nomes das lojas;
// b. Um outro vetor com quatro posições com os nomes dos produtos;
// c. Uma matriz com os preços de todos os produtos em cada loja.
// O programa deve mostrar todas as relações (nome do produto - nome da loja - preço)
// nas quais o preço não ultrapasse R$ 120,00.

// Procedimento que limpa a tela
void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    double mPreco_produLoja[8][4];
    string vNomes_lojas[8];
    string vNomes_produto[4];

    setlocale (LC_CTYPE, "PORTUGUESE");


    for (int i = 0; i < 8; i++) {
        cout << "Informe o nome da " << i + 1 << "° loja: ";
        // Preenchendo o vetor de nomes das lojas
        getline (cin, vNomes_lojas[i]);
        for (int j = 0; j < 4; j++) {
            // Preenchendo o vetor de nomes dos produtos das lojas
            cout << "Informe o produto da loja " << vNomes_lojas[i] << ": ";
            getline (cin, vNomes_produto[j]);
            // Preenchendo a matriz de preços dos produtos das loja
            cout << "Informe o preço do produto " << vNomes_produto[j] << " da loja " << vNomes_lojas[i] << ": ";
            mPreco_produLoja[i][j] = (rand () % 20);
            cin.ignore ();
        }
    }

    Limpa ();

    // Imprime as lojas/ os produtos e seus preços
    for (int i = 0; i < 8; i++) {
        cout << "==================================================== \n";
        cout << i + 1 << "° loja: " << vNomes_lojas[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Produtos da loja: " << vNomes_produto[j] << endl;
            cout << "Preço do produto: " << mPreco_produLoja[i][j] << endl;
            cout << "===================================================== \n";
        }
    }

    Limpa ();

    return 0;
}