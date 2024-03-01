#include "testeLibrary.h"

// 12. Criar um algoritmo que receba a idade, a altura e o peso de várias pessoas. Calcule e imprima:
// a quantidade de pessoas com idade superior a 50 anos;
// a média das alturas das pessoas com idade entre 10 e 20 anos;
// a porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.

void Menu_pessoas ()
{
    cout << "1 - Cadastrar idade." << endl;
    cout << "2 - Cadastrar altura." << endl;
    cout << "3 - Cadastrar peso" << endl;
    cout << "4 - Sar." << endl;
    cout << "> ";
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

typedef struct Pessoas
{

    int idade;
    double altura;
    double peso;

} Pessoas;

int main ()
{

    int Opcao;
    // Variavel contador de pessaos acima de 50 anos
    int Quant_superior = 0;
    // Variaves média e contador de pessoas entre 10 e 20 anos
    double Quant_10_20 = 0, Media_10_20 = 0;
    // Variaveis Para o calculo do percentual de pessoas com peso inferiror a 40 Kg
    int QuantKg_geral, Percen_Kg, QuantKg_40;
    // Varivel que define o tamanho do vetor
    int Num;


    setlocale (LC_CTYPE, "PORTUGUESE");

    cout << "Informe o tanto de pessoas que deseja cadastrar: ";
    cin >> Num;
    QuantKg_geral = Num;

    // Vetores para guardar a idade; altura e peso
    Pessoas vIdade[Num];
    Pessoas vAltura[Num];
    Pessoas vPeso[Num];

    Menu_pessoas ();
    cin >> Opcao;

    while (Opcao != 4) {
        switch (Opcao) {
        case 1:
            Limpa ();
            cout << "CADASTRO DE IDADE" << endl;
            for (int i = 0; i < Num; i++) {
                cout << "Informe a idade da " << i + 1 << "° pessoa: ";
                cin >> vIdade[i].idade;
                if (vIdade[i].idade > 50) {
                    Quant_superior++;
                }
            }

            Limpa ();
            Menu_pessoas ();
            cin >> Opcao;
            break;

        case 2:
            Limpa ();
            cout << "CADASTRO DE ALTURA" << endl;
            for (int i = 0; i < Num; i++) {
                cout << "Informe a altura da " << i + 1 << "° pessoa: ";
                cin >> vAltura[i].altura;
                if ((vIdade[i].idade >= 10) && (vIdade[i].idade <= 20)) {
                    Quant_10_20 += vAltura[i].altura;
                }
            }

            Limpa ();
            Menu_pessoas ();
            cin >> Opcao;
            break;

        case 3:
            Limpa ();
            cout << "CADASTRO DE PESO" << endl;
            for (int i = 0; i < Num; i++) {
                cout << "Informe o peso da " << i + 1 << "° pessoa: ";
                cin >> vPeso[i].peso;
                if (vPeso[i].peso < 40) {
                    QuantKg_40++;
                }
            }

            Limpa ();
            Menu_pessoas ();
            cin >> Opcao;
            break;

        default:
            Limpa ();
            cout << "Opção Invalida" << endl;
            Menu_pessoas ();
            cin >> Opcao;
            break;
        }
    }

    // Calculo das médias e porcentagens
    Media_10_20 = Quant_10_20 / QuantKg_geral;
    Percen_Kg   = QuantKg_40 * 100 / Num;

    // Impressão dos dados das pessoas
    for (int i = 0; i < Num; i++) {
        cout << "------------------------------------------------------------" << endl;
        cout << "Idade da " << i + 1 << "° pessoa " << vIdade[i].idade << endl;
        cout << "Peso da " << i + 1 << "° pessoa " << vPeso[i].peso << " Kg" << endl;
        cout << "Altura da " << i + 1 << "° pessoa " << vAltura[i].altura << endl;
        cout << "------------------------------------------------------------" << endl;
    }

    Limpa ();

    cout << " Quantidade de pessoas com idade superior a 50 anos = " << Quant_superior << endl;
    cout << "\n";
    cout << " Média das alturas das pessoas com idade entre 10 e 20 anos = " << Media_10_20 << endl;
    cout << "\n";
    cout << " Porcentagem de pessoas com peso inferior a 40 quilos = " << Percen_Kg << "%" << endl;
    cout << "\n";

    return 0;
}