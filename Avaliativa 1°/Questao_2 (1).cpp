#include "testeLibrary.h"

// Uma certa fabrica produziu dois tipos de motores Ml e M2 nos meses de janeiro a dezembro
// o numero de motores foi registrado na Tabela 1 O setor de controle de vendas tem uma tabela de custo e do lucro (em mil reais) obtidos com cada motor
// conforme Tabela 2.

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
    int T1_motores[12][2];
    double M2_Custo, M1_Custo, M2_Lucro, M1_Lucro;
    double vCusto_M2[12], vLucro_M2[12], vCusto_M1[12], vLucro_M1[12], vLucro_Liquido[12];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Informa quantos motores foram registrados naquele mês
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Informe o número registrados para o " << j + 1 << "° motor no " << i + 1 << "° mês: ";
            cin >> T1_motores[i][j];
            cout << "\n";
        }
    }

    Limpa ();

    cout << "Informe o custo do motor 1: ";
    cin >> M1_Custo;

    cout << "\n";

    cout << "Informe o lucro do motor 1: ";
    cin >> M1_Lucro;

    cout << "\n";

    cout << "Informe o custo do motor 2: ";
    cin >> M2_Custo;

    cout << "\n";

    cout << "Informe o lucro do motor 2: ";
    cin >> M2_Lucro;

    cout << "\n";

    Limpa ();

    // Faz o calculo dos lucros e custo dos 2 motores
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 2; j++) {
            // Custo do motor 1 e 2
            vCusto_M1[i] = T1_motores[i][j] * M1_Custo;
            vCusto_M2[i] = T1_motores[i][j] * M2_Custo;

            // Lucro do motor 1 e 2
            vLucro_M1[i] = T1_motores[i][j] * M1_Lucro;
            vLucro_M2[i] = T1_motores[i][j] * M2_Lucro;
        }
    }

    // Imprime os custo dos dois motores em cada mês
    cout << "========================================================================== \n";
    for (int i = 0; i < 12; i++) {
        cout << "========================================================================== \n";
        cout << "O custo do " << i + 1 << "° mês do motor 1: | R$" << vCusto_M1[i] << endl;
        cout << "O custo do " << i + 1 << "° mês do motor 2: | R$" << vCusto_M2[i] << endl;
        cout << "========================================================================== \n";
    }
    cout << "========================================================================== \n";

    Limpa ();
    

    // Imprime os lucros dos dois motores em cada mês
    cout << "========================================================================== \n";
    for (int i = 0; i < 12; i++) {
        cout << "===================================================================== \n";
        cout << "O lucro do " << i + 1 << "° mês do motor 1: | R$" << vLucro_M1[i] << endl;
        cout << "O lucro do " << i + 1 << "° mês do motor 2: | R$" << vLucro_M2[i] << endl;
        cout << "===================================================================== \n";
    }
    cout << "========================================================================= \n";

    Limpa ();

    // Faz o calculo do lucro liquido
    for (int i = 0; i < 12; i++) {
        vLucro_Liquido[i] = ((vLucro_M1[i] - vCusto_M1[i]) + (vLucro_M2[i] - vCusto_M2[i]));
    }

    // Imprime os lucros liquidos de cada mês
    cout << "********************************************************************* \n";
    for (int i = 0; i < 12; i++) {
        cout << "********************************************************************* \n";
        cout << " O lucro liquido obtido no " << i + 1 << "° mês = R$" << vLucro_Liquido[i] << endl;
        cout << "********************************************************************* \n";
    }
    cout << "********************************************************************* \n";

    Limpa ();
}