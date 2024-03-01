#include "testeLibrary.h"

// Uma loja utiliza os seguintes códigos para as transações de cada dia:
// "v" _ para compras à vista;
// ?p"_para compras a prazo
// É dada uma lista de transações contendo o valor de cada compra e o respectivo código
// da transação. Criar um algoritmo que calcule e imprima:
// valor total das compras à vista;
// valor total das compras a prazo;
// valor total das compras efetuadas;
// valor a receber pelas compras a prazo, isto é, primeira parcela, sabendo-se
// que as compras serão pagas em três vezes.
// O número de transações efetuadas, por dia, deverá ser digitado.
// Deverá haver trecho de proteção para entrada do código de tal maneira que só
// aceite as letras V e P, maiúscula ou minúscula.

struct Loja
{
    int pagamento_valor_vista, pagamento_valor_prazo;
    string pagamento_metodo_p, pagamento_metodo_v, pagamento_codigo;
};

void Menu_Loja ()
{
    cout << "1 - Compra à vista." << endl;
    cout << "2 - Compra à prazo." << endl;
    cout << "3 - Sair." << endl;
    cout << "> ";
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int Op = 0, j = 0, k = 0, Op_cont = 0;
    int total_Vista    = 0;
    int total_Prazo    = 0, parcela_3v;
    int total_Efetuada = 0;
    Loja Pagamneto[40];

    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu_Loja ();
    cin >> Op;
    Limpa ();

    cout << "Quantas trasações seram feitas: ";
    cin >> j;
    for (int i = 0; i < j; i++) {
        do {
            if (Op == 1) {
                cout << "=======COMPRA À VISTA=======" << endl;
                cout << "Informe o valor a ser pago: ";
                cin >> Pagamneto[i].pagamento_valor_vista;
                total_Vista += Pagamneto[i].pagamento_valor_vista;
                total_Efetuada += total_Vista;
                cout << "\n";
                while ((Pagamneto[i].pagamento_metodo_v != "v") && (Pagamneto[i].pagamento_metodo_v != "V")) {
                    cout << "Informe o método de pagamento: ";
                    cin >> Pagamneto[i].pagamento_metodo_v;
                }
                cout << "\n";
                cout << "Informe o código: ";
                cin >> Pagamneto[i].pagamento_codigo;

                Limpa ();
                cout << "Você deseja continuar? 1.sim || 0.não: " << endl;
                cin >> Op_cont;
                if (Op_cont == 1) {
                    j++;
                } else if (Op_cont == 0)
                    Op_cont = 0;
            }
        } while (Op_cont != 0);
    }

    Menu_Loja ();
    cin >> Op;
    Limpa ();

    cout << "Quantas trasações seram feitas: ";
    cin >> k;
    for (int p = 0; p < k; p++) {
        do {
            if (Op == 2) {
                cout << "=======COMPRA À PRAZO=======" << endl;
                cout << "Informe o valor a ser pago: ";
                cin >> Pagamneto[p].pagamento_valor_prazo;
                total_Prazo += Pagamneto[p].pagamento_valor_prazo;
                total_Efetuada += total_Prazo;
                cout << "\n";
                while ((Pagamneto[p].pagamento_metodo_p != "p") && (Pagamneto[p].pagamento_metodo_p != "P")) {
                    cout << "Informe o método de pagamento: ";
                    cin >> Pagamneto[p].pagamento_metodo_p;
                }
                cout << "\n";
                cout << "Informe o código: ";
                cin >> Pagamneto[p].pagamento_codigo;

                Limpa ();
                cout << "Você deseja continuar? 1.sim || 0.não: " << endl;
                cin >> Op_cont;
                if (Op_cont == 1) {
                    p++;
                } else if (Op_cont == 0)
                    Op_cont = 0;
            }
        } while (Op_cont != 0);
    }

    Menu_Loja ();
    cin >> Op;
    Limpa ();

    cout << "============Compra à vista============" << endl;
    for (int i = 0; i < j; i++) {
        cout << "=======================================" << endl;
        cout << "Pagamento do " << i + 1 << "° item: " << Pagamneto[i].pagamento_valor_vista << endl;
        cout << "Código do " << i + 1 << "° item: " << Pagamneto[i].pagamento_codigo << endl;
        cout << "Forma de pagamento do " << i + 1 << "° item: " << Pagamneto[i].pagamento_metodo_v << endl;
        cout << "=======================================" << endl;
    }

    Limpa ();

    cout << "============Compra à prazo============" << endl;
    for (int p = 0; p < k; p++) {
        cout << "=======================================" << endl;
        cout << "Pagamento do " << p + 1 << "° item: " << Pagamneto[p].pagamento_valor_vista << endl;
        cout << "Código do " << p + 1 << "° item: " << Pagamneto[p].pagamento_codigo << endl;
        cout << "Forma de pagamento do " << p + 1 << "° item: " << Pagamneto[p].pagamento_metodo_p << endl;
        cout << "=======================================" << endl;
    }

    Limpa ();

    cout << "Valor total das compras a vista: " << total_Vista << endl;
    cout << "Valor total das compras a prazo: " << total_Prazo << endl;
    cout << "Valor total das compras a efetuada: " << total_Efetuada << endl;

    parcela_3v = total_Prazo / 3;

    cout << "Valor a receber pela a primeira parcela: " << parcela_3v << endl;

    return 0;
}