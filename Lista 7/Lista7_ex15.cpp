#include "testeLibrary.h"

// Crie um algoritmo que possa armazenar as alturas de dez atletas de
// cinco delegações que participarão dos jogos de verão. Imprimir a maior
// altura de cada delegação.

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
    double mAtletas_alturas[5][10];
    string vDelegacao[5];
    double vAtletas_Maltura[5];
    double maiorAltura;
    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenche a matriz de delegações e atletas
    for (int i = 0; i < 5; i++) {
        cout << "Informe o nome da " << i + 1 << "° delegação: ";
        getline (cin, vDelegacao[i]);
        for (int j = 0; j < 10; j++) {
            cout << "Informe a altura dos atletas: ";
            mAtletas_alturas[i][j] = (rand () % 35);
            cin.ignore ();

            if (mAtletas_alturas[i][j] > maiorAltura) {
                maiorAltura = mAtletas_alturas[i][j];
            } else if (j >= 10) {
                vAtletas_Maltura[i] = maiorAltura;
            }
        }
    }

    Limpa ();

    // Impressão das delegações e suas alturas
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "° delegação: " << vDelegacao[i] << endl;
        for (int j = 0; j < 10; j++) {
            cout << "Altura do " << j + 1 << "° atleta: " << mAtletas_alturas[i][j] << endl;
        }
        cout << "\n";
    }

    Limpa ();

    // Impressão da maior altura de cada delegacia
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "° delegação: " << vDelegacao[i] << " e sua maior altura: " << vAtletas_Maltura[i] << endl;
    }

    Limpa ();
}
