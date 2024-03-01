#include "testeLibrary.h"

// Uma fábrica produz e vende vários produtos e para cada um deles tem-se o nome,
// quantidade produzida e quantidade vendida. Criar um algoritmo que imprima:
// Para cada produto, nome, quantidade no estoque e uma mensagem se o
// produto tiver menos de 50 itens no estoque;
// Nome e quantidade do produto com maior estoque;

// Menu onde o usuário escolhe entre cadastrar nome e a quantidade ou sair
void Menu_Fabrica ()
{
    cout << "1 - Cadastrar nome do produto e quantidade no estoque." << endl;
    cout << "2 - Sair." << endl;
    cout << "> ";
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

// Estrutura onde guarda as variaveis nome e quantidade do produto
typedef struct Produto
{
    string nome_Produto;
    int quantidade_Estoque;
} Produto;

int main ()
{

    int Opcao, Num_produtos;
    setlocale (LC_CTYPE, "PORTUGUESE");

    // Usuário escolhe quantos produtos deseja cadastrar
    cout << "Quantos produtos seram cadatrados? ";
    cin >> Num_produtos;
    Produto vFabrica[Num_produtos];

    Limpa ();

    Menu_Fabrica ();
    cin >> Opcao;

    Limpa ();

    // Estrura de repetição onde o usuário escolhe continuar ou parar o cadastro
    while (Opcao != 2) {
        switch (Opcao) {
            Limpa ();
        case 1:
            // Estrutura de repetição onde o usuário cadastra os produtos e quantidade em estoque
            for (int i = 0; i < Num_produtos; i++) {
                cout << "Informe o nome do " << i + 1 << "° produto: ";
                cin >> vFabrica[i].nome_Produto;
                cout << "\n";
                cout << "Informe a quantidade em estoque para o produto " << vFabrica[10].nome_Produto << ": ";
                cin >> vFabrica[i].quantidade_Estoque;
                cout << "\n";
            }
            Limpa ();
            Menu_Fabrica ();
            cin >> Opcao;
            break;

        default:
            Limpa ();
            cout << "Opção Invalida" << endl;
            Menu_Fabrica ();
            cin >> Opcao;
            break;
        }
    }

    // Impressão dos cadastros dos produtos
    cout << "========================" << endl;
    cout << "-----------------------" << endl;
    for (int i = 0; i < Num_produtos; i++) {
        cout << "------------------------" << endl;
        cout << i + 1 << "° produto: " << vFabrica[i].nome_Produto << " ";
        if (vFabrica[i].quantidade_Estoque < 50) {
            cout << " | Quantidade no estoque: " << vFabrica[i].quantidade_Estoque << endl;
            cout << "Quantidade menor que 50" << endl;
        } else {
            cout << " | Quantidade no estoque: " << vFabrica[i].quantidade_Estoque << endl;
            cout << "Quantidade acima de 50" << endl;
        }
        cout << "-----------------------" << endl;
    }
    cout << "-----------------------" << endl;
    cout << "========================" << endl;


    return 0;
}