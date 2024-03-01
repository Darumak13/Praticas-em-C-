#include "testeLibrary.h"

// Um hotel fazenda gostaria de fazer um algoritmo que pudesse controlar os seguintes
// dados dos 50 quartos:
// número de leitos por quarto;
// preço
// situação: alugado, livre ou reservado;
// aluguel do quarto com data de entrada e de saída e número de diárias;
// despesas dentro do hotel;
// valor a ser pago;
// impressão de todos os quartos com a situação de cada um;
// impressão dos quartos livres.

// Criar um algoritmo que funcione de acordo com o menu a seguir:
// ****************************************************
// | Hotel-Fazenda Sucesso |
// ****************************************************
// 1. Cadastra quartos
// 2. Lista todos os quartos
// 3. Lista quartos ocupados
// 4. Aluguel/reserva quarto
// 5. Entra despesas extras
// 6. Calcula despesa do quarto
// 7. Sair
// ****************************************************
// OPCAO:

// Menu para o Hotel
void Menu_Hotel ()
{
    cout << "****************************************************" << endl;
    cout << "| Hotel-Fazenda Sucesso |" << endl;
    cout << "****************************************************" << endl;
    cout << "1. Cadastra quartos." << endl;
    cout << "2. Lista todos os quartos." << endl;
    cout << "3. Lista quartos ocupados." << endl;
    cout << "4. Aluguel/reserva quarto." << endl;
    cout << "5. Entra despesas extras." << endl;
    cout << "6. Calcula despesa do quarto." << endl;
    cout << "7. Sair." << endl;
    cout << "****************************************************" << endl;
    cout << "OPCAO: ";
}

// Strutura que guarda as variaveis do vetor hotel
struct Quarto
{
    int numero_do_quarto;
    string Aluguel_S, Aluguel_E, Quarto_situacao;
    double preco, Quarto_despensas, Quarto_despensa_extra, Quarto_aluguel, Quarto_diaria;
};

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int n, Op, quartoAlugel, troca_situacao, posicao_numero_quar = 0;
    setlocale (LC_CTYPE, "PORTUGUESE");

    cout << "Informe quantos leitos contem: ";
    cin >> n;
    cin.ignore ();
    cout << "\n";

    Quarto Hotel[n];

    Menu_Hotel ();
    cin >> Op;
    cin.ignore ();

    while (Op != 7) {
        switch (Op) {
        case 1:
            // Cadastra os quartos
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Cadastro de quartos" << endl;
            for (int i = 0; i < n; i++) {
                cout << "Informe o número do " << i + 1 << "° quarto: ";
                cin >> Hotel[i].numero_do_quarto;
                cout << "\n";
                cin.ignore ();
                cout << "Informe o preço do " << i + 1 << "° quarto: ";
                cin >> Hotel[i].preco;
                cout << "\n";
                cin.ignore ();
                while ((Hotel[i].Quarto_situacao != "alugado") && (Hotel[i].Quarto_situacao != "livre") && (Hotel[i].Quarto_situacao != "reservado")) {
                    cout << "Informe a situação do " << i + 1 << "° quarto." << endl;
                    cout << "livre || alugado || reservado: ";
                    getline (cin, Hotel[i].Quarto_situacao);
                }
                cout << "\n";
                cout << "Qual seria a data de entrada: ";
                getline (cin, Hotel[i].Aluguel_E);
                cout << "\n";
                cout << "Qual seria a data de saida: ";
                getline (cin, Hotel[i].Aluguel_S);
                cout << "\n";
                cout << "Qual seria o número de diarias: ";
                cin >> Hotel[i].Quarto_diaria;
                cin.ignore ();
                cout << "\n";
                Limpa ();
            }

            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        case 2:
            // Lista todos os quartos cadastrados
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Lista dos quartos" << endl;
            for (int i = 0; i < n; i++) {
                cout << "=====================================================" << endl;
                cout << " Número do " << i + 1 << "° quarto: " << Hotel[i].numero_do_quarto << "|";
                cout << " Situação do quarto número: " << Hotel[i].numero_do_quarto << " = " << Hotel[i].Quarto_situacao << endl;
                cout << " Número das diarias do quarto: " << Hotel[i].numero_do_quarto << " = " << Hotel[i].Quarto_diaria << endl;
                cout << " Data de entrada: " << Hotel[i].Aluguel_E << "|";
                cout << " Data de saida: " << Hotel[i].Aluguel_S << endl;
                if ((Hotel[i].Quarto_despensas > 0) && (Hotel[i].Quarto_aluguel > 0)) {
                    cout << " Despensas gerais: " << Hotel[i].Quarto_despensas << "|";
                    cout << " Alugel geral do quarto: " << Hotel[i].Quarto_aluguel << endl;
                    cout << "=====================================================" << endl;
                }
                Limpa ();
            }
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        case 3:
            // Lista a situação de todos os quartos
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Lista dos quartos livres/reservados e alugados" << endl;
            for (int i = 0; i < n; i++) {
                if (Hotel[i].Quarto_situacao == "livre") {
                    cout << " O quarto " << Hotel[i].numero_do_quarto << " atualmente está " << Hotel[i].Quarto_situacao << endl;
                } else if (Hotel[i].Quarto_situacao == "alugado") {
                    cout << "O quarto " << Hotel[i].numero_do_quarto << " atualmente está " << Hotel[i].Quarto_situacao << endl;
                } else
                    cout << "O quarto " << Hotel[i].numero_do_quarto << " atualmente está " << Hotel[i].Quarto_situacao << endl;
            }
            Limpa ();
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        case 4:
            // Faz a reserva ou aluga um quarto caso esteja livre
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Reserva ou aluga um quarto livre" << endl;
            for (int i = 0; i < n; i++) {
                if (Hotel[i].Quarto_situacao == "livre") {
                    cout << "você quer alugar ou reservar ?" << endl;
                    cout << "1. Alugar || 2. Reservar" << endl;
                    cout << "> ";
                    cin >> troca_situacao;
                    if (troca_situacao == 1) {
                        Hotel[i].Quarto_situacao = "alugado";
                    } else if (troca_situacao == 2) {
                        Hotel[i].Quarto_situacao = "reservado";
                    }
                }
            }
            Limpa();
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        case 5:
            // Inclui despesas a mais caso a pessoas deseja acrescentar algo
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Entra despesas extras" << endl;
            for(int i = 0; i < n; i ++){
            cout << "Qual seria o número do quarto: [" << i << "] " << Hotel[i].numero_do_quarto << endl;
            
            }
            cout << "Informe a posição dele: ";
            cin >> posicao_numero_quar;
            cout << "Qual seria o valor da despensa extra do quarto: " << Hotel[posicao_numero_quar].numero_do_quarto << ": ";
            cin >> Hotel[posicao_numero_quar].Quarto_despensa_extra;
            cin.ignore ();
            Hotel[posicao_numero_quar].Quarto_despensas += Hotel[posicao_numero_quar].Quarto_despensa_extra;
            Limpa();
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        case 6:
            // Calcula as depesas de todos os quartos
            Limpa ();
            cout << "-------------------" << endl;
            cout << "Calculo das despesas dos quartos" << endl;
            for (int i = 0; i < n; i++) {
                Hotel[i].Quarto_despensas = Hotel[i].preco * Hotel[i].Quarto_diaria;
                cout << "\n";
                cout << "Quantas vezes deseja dividir o preço do " << i + 1 << "° quarto ? ";
                cin >> quartoAlugel;
                cin.ignore ();
                Hotel[i].Quarto_aluguel = (Hotel[i].preco + Hotel[i].Quarto_despensas) / quartoAlugel;
            }
            Limpa();
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;

        default:
            cout << "Opção invalida." << endl;
            Limpa();
            Menu_Hotel ();
            cin >> Op;
            cin.ignore ();
            Limpa ();
            break;
        }
    }

    return 0;
}