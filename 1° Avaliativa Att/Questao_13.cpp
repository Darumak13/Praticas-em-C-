#include "testeLibrary.h"

// Uma loja utiliza os seguintes c�digos para as transa��es de cada dia:
// "v" _ para compras � vista;
// ?p"_para compras a prazo
// � dada uma lista de transa��es contendo o valor de cada compra e o respectivo c�digo
// da transa��o. Criar um algoritmo que calcule e imprima:
// valor total das compras � vista;
// valor total das compras a prazo;
// valor total das compras efetuadas;
// valor a receber pelas compras a prazo, isto �, primeira parcela, sabendo-se
// que as compras ser�o pagas em tr�s vezes.
// O n�mero de transa��es efetuadas, por dia, dever� ser digitado.
// Dever� haver trecho de prote��o para entrada do c�digo de tal maneira que s�
// aceite as letras V e P, mai�scula ou min�scula.

// Estrutura que guarda as variaveis para o vetor da loja
struct Loja
{
    int pagamento_valor_vista, pagamento_valor_prazo;
    string pagamento_metodo_p, pagamento_metodo_v, pagamento_codigo;
};

// Menu da loja
void Menu_Loja ()
{
    cout << "1 - Compra � vista." << endl;
    cout << "2 - Compra � prazo." << endl;
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
    int Op = 0; 
    // Variavel que le o tanto de transa��es que seram feitas � vista
    int j = 0; 
    // Variavel que le o tanto de transa��es que seram feitas � prazo
    int k = 0; 
    // Variavel que permite ao usu�rio se deseja acrescentar mais uma compra
    int Op_cont = 0;
    int total_Vista    = 0;
    int total_Prazo    = 0, parcela_3v;
    int total_Efetuada = 0;
    Loja Pagamneto[40];

    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu_Loja ();
    cin >> Op;
    Limpa ();

    // Usu�rio informa quantas transa��es deseja fazer
    cout << "Quantas trasa��es seram feitas: ";
    cin >> j;
    for (int i = 0; i < j; i++) {
        do {
            if (Op == 1) {
                cout << "=======COMPRA � VISTA=======" << endl;
                cout << "Informe o valor a ser pago: ";
                cin >> Pagamneto[i].pagamento_valor_vista;
                total_Vista += Pagamneto[i].pagamento_valor_vista;
                total_Efetuada += total_Vista;
                cout << "\n";
                while ((Pagamneto[i].pagamento_metodo_v != "v") && (Pagamneto[i].pagamento_metodo_v != "V")) {
                    cout << "Informe o m�todo de pagamento: ";
                    cin >> Pagamneto[i].pagamento_metodo_v;
                }
                cout << "\n";
                cout << "Informe o c�digo: ";
                cin >> Pagamneto[i].pagamento_codigo;

                Limpa ();
                // Usu�rio decide se quer adicionar mais uma compra
                cout << "Voc� acrescentar mais uma compra ? 1.sim || 0.n�o: " << endl;
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

    // Usu�rio informa quantas transa��es deseja fazer
    cout << "Quantas trasa��es seram feitas: ";
    cin >> k;
    for (int p = 0; p < k; p++) {
        do {
            if (Op == 2) {
                cout << "=======COMPRA � PRAZO=======" << endl;
                cout << "Informe o valor a ser pago: ";
                cin >> Pagamneto[p].pagamento_valor_prazo;
                total_Prazo += Pagamneto[p].pagamento_valor_prazo;
                total_Efetuada += total_Prazo;
                cout << "\n";
                while ((Pagamneto[p].pagamento_metodo_p != "p") && (Pagamneto[p].pagamento_metodo_p != "P")) {
                    cout << "Informe o m�todo de pagamento: ";
                    cin >> Pagamneto[p].pagamento_metodo_p;
                }
                cout << "\n";
                cout << "Informe o c�digo: ";
                cin >> Pagamneto[p].pagamento_codigo;

                Limpa ();
                // Usu�rio decide se quer adicionar mais uma compra
                cout << "Voc� acrescentar mais uma compra ? 1.sim || 0.n�o: " << endl;
                cin >> Op_cont;
                if (Op_cont == 1) {
                    p++;
                } else if (Op_cont == 0)
                    Op_cont = 0;
            }
        } while (Op_cont != 0);
    }


    cout << "============Compra � vista============" << endl;
    for (int i = 0; i < j; i++) {
        // Imprime todas as compras feitas � vista
        cout << "=======================================" << endl;
        cout << "Pagamento do " << i + 1 << "� item: " << Pagamneto[i].pagamento_valor_vista << endl;
        cout << "C�digo do " << i + 1 << "� item: " << Pagamneto[i].pagamento_codigo << endl;
        cout << "Forma de pagamento do " << i + 1 << "� item: " << Pagamneto[i].pagamento_metodo_v << endl;
        cout << "=======================================" << endl;
    }

    Limpa ();

    cout << "============Compra � prazo============" << endl;
    for (int p = 0; p < k; p++) {
        // Imprime todas as compras feitas � prazo
        cout << "=======================================" << endl;
        cout << "Pagamento do " << p + 1 << "� item: " << Pagamneto[p].pagamento_valor_vista << endl;
        cout << "C�digo do " << p + 1 << "� item: " << Pagamneto[p].pagamento_codigo << endl;
        cout << "Forma de pagamento do " << p + 1 << "� item: " << Pagamneto[p].pagamento_metodo_p << endl;
        cout << "=======================================" << endl;
    }

    Limpa ();

    // Imprime o valor total das compras � vista
    cout << "Valor total das compras a vista: " << total_Vista << endl;
    // Imprime o valor total das compras � prazo
    cout << "Valor total das compras a prazo: " << total_Prazo << endl;
    // Imprime o valor total das compras dos dois met�dos de pagamento
    cout << "Valor total das compras a efetuada: " << total_Efetuada << endl;

    // Faz o calculo da parcelar do metodo � prazo
    parcela_3v = total_Prazo / 3;

    // Imprime o valor a receber da primeira parcela � prazo 
    cout << "Valor a receber pela a primeira parcela: " << parcela_3v << endl;

    return 0;
}