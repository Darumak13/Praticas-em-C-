#include "testeLibrary.h"

// 12. Fa�a um programa que carregue:
// a. Um vetor de oito posi��es com os nomes das lojas;
// b. Um outro vetor com quatro posi��es com os nomes dos produtos;
// c. Uma matriz com os pre�os de todos os produtos em cada loja.
// O programa deve mostrar todas as rela��es (nome do produto - nome da loja - pre�o)
// nas quais o pre�o n�o�ultrapasse R$ 120,00.

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
        cout << "Informe o nome da " << i + 1 << "� loja: ";
        // Preenchendo o vetor de nomes das lojas
        getline (cin, vNomes_lojas[i]);
        for (int j = 0; j < 4; j++) {
            // Preenchendo o vetor de nomes dos produtos das lojas
            cout << "Informe o produto da loja " << vNomes_lojas[i] << ": ";
            getline (cin, vNomes_produto[j]);
            // Preenchendo a matriz de pre�os dos produtos das loja
            cout << "Informe o pre�o do produto " << vNomes_produto[j] << " da loja " << vNomes_lojas[i] << ": ";
            mPreco_produLoja[i][j] = (rand () % 20);
            cin.ignore ();
        }
    }

    Limpa ();

    // Imprime as lojas/ os produtos e seus pre�os
    for (int i = 0; i < 8; i++) {
        cout << "==================================================== \n";
        cout << i + 1 << "� loja: " << vNomes_lojas[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Produtos da loja: " << vNomes_produto[j] << endl;
            cout << "Pre�o do produto: " << mPreco_produLoja[i][j] << endl;
            cout << "===================================================== \n";
        }
    }

    Limpa ();

    return 0;
}