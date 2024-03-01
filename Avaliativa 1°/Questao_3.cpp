#include "testeLibrary.h"

// Uma editora envia remessas, para cada estado do Brasil e para o DF, sempre em
// pacotes com 100 livros O nÃºmero de pacotes enviados por vez depende de cada esta
// do/DF Observaras tabelas a seguir e fazer um algoritmo que deixe o usuÃ¡rio entrar
// com os dados para as duas matrizes e depois escolher se deseja imprimir todos os
// dados, os totais para um dos tipos, mensalmente, totais de todos os tipos em um mÃªs.


// Sabe-se que a segunda tabela contÃ©m o nÃºmero de pacotes, estipulado pela editora
// no envio de cada remessa para cada estado/DF por tipo e a primeira contÃ©m o nÃºmero
// de remessas feitas por mÃªs para cada estado/DF, e que, em cada remessa, todos os
// tipos sÃ£o enviados. A consulta poderÃ¡ ser feita vÃ¡rias vezes.

// Menu para o usuÃ¡rio escolher o que fazer
void Menu ()
{
    cout << "MENU" << endl;
    cout << "1. Cadastro de estados" << endl;
    cout << "2. Cadastro de remessas" << endl;
    cout << "3. Cadastro de pacotes" << endl;
    cout << "4. Impress�o da tabela 1 de remessas" << endl;
    cout << "5. Impress�o da tabela 2 de remesas estipuladas" << endl;
    cout << "6. Sair" << endl;
    cout << "> ";
}

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
    int mT1_Remessas[7][6];
    int mT2_Envio_Remesas[7][7];
    string vT3_Estados[7];
    int Opcao;

    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu ();
    cin >> Opcao;
    cin.ignore ();

    while (Opcao != 6) {
        switch (Opcao) {

        case 1:
            Limpa ();
            // Informa os estados
            for (int i = 0; i < 7; i++) {
                if (vT3_Estados[7] != " ") {
                    cout << "Informe o " << i + 1 << "� estado: ";
                    getline (cin, vT3_Estados[i]);
                } else {
                    vT3_Estados[7] = "DF";
                }
            }

            break;

        case 2:
            Limpa ();
            // Insere o n�mero de remessas feitas naquele m�s e no estado especificado
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << "Informe quantas remesas foram feitas no " << j + 1 << "� m�s no " << i + 1 << "� estado: ";
                    cin >> mT1_Remessas[i][j];
                }
            }

            break;


        case 3:
            Limpa ();
            // Informa quantos pacotes foram estipulados pela editora naquele estado
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    cout << "Informe  o " << i + 1 << " n�mero de pacotes no " << j + 1 << "� estado: ";
                    cin >> mT2_Envio_Remesas[i][j];
                }
            }

            break;

        case 4:
            // Imprime a tabela de remesas feitas por m�s em cada estado
            Limpa ();
            cout << "===============================================" << endl;
            for (int i = 0; i < 7; i++) {
                cout << "===============================================" << endl;
                cout << "O estado de " << vT3_Estados[i] << " " << endl;
                for (int j = 0; j < 6; j++) {
                    cout << "no " << j + 1 << "� m�s const�o " << mT1_Remessas[i][j] << " remessas." << endl;
                }
                cout << "===============================================" << endl;
            }
            cout << "===============================================" << endl;

            break;


        case 5:
            // Imprime a tabela de remessas estipuladas por cada estado
            Limpa ();
            cout << "*********************************************" << endl;
            for (int i = 0; i < 7; i++) {
                cout << "*********************************************" << endl;
                cout << "No estado de " << vT3_Estados[i] << " " << endl;
                for (int j = 0; j < 6; j++) {
                    cout << "foi estipulado " << mT1_Remessas[i][j] << " remessas." << endl;
                }
                cout << "*********************************************" << endl;
            }
            cout << "*********************************************" << endl;

            break;

        default: cout << "> Informa��o Invalida <" << endl; break;
        }
        Limpa ();
        Menu ();
        cin >> Opcao;
    }

    return 0;
}