#include "testeLibrary.h"

// Faça um programa que controle o estoque de uma loja de brinquedos. Atualmente, no
// estoque há 40 itens, cada um contendo código, descrição, preço de compra, preço de
// venda, quantidade em estoque e estoque mínimo. O programa deverá:
// a) Criar uma rotina para cadastrar os produtos.
// b) Criar uma rotina para mostrar o valor do lucro obtido com a venda de
// determinado produto e o percentual que esse valor representa.
// c) Criar uma rotina que mostre os produtos com quantidade em estoque abaixo
// do estoque mínimo permitido.


void Menu_Brinquedos(){
    cout << "1 - Cadastrar os produtos." << endl;
    cout << "2 - Calcula o lucro obtido e o seu percentual." << endl;
    cout << "3 - Mostar os produtos com estoque abaixo do mínino." << endl;
    cout << "4 - Impressão do dados completo dos brinqudos." << endl;
    cout << "5 - Sair." << endl;
    cout << "Opção: ";
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

// Estrutura onde guarda as variaveis nome e quantidade do produto
struct Brinquedo
{
    string nome_brinquedo, codigo, descricao;
    double preco_compra, preco_venda, lucro , percentual;
    int quantidade_estoque, estoque_minimo;
} ;

int main ()
{

    int Opcao, num;
    setlocale (LC_CTYPE, "PORTUGUESE");

    cout << "Informe quantos cadastrar: ";
    cin >> num;
    cin.ignore();
    cout << "\n";
    Brinquedo loja[num];

    Menu_Brinquedos();
    cin >> Opcao;
    cin.ignore();
    Limpa();

    while (Opcao != 5)
    {
        switch (Opcao)
        {
        case 1:
        cout << "Cadastro dos Brinquedos" << endl;
        for(int i = 0; i < num; i ++){
            cout << "Informe o nome do " << i + 1 << "° brinquedo: ";
            getline(cin,loja[i].nome_brinquedo);
            cout << "\n";
            cout << "Informe o código do brinquedo " << loja[i].nome_brinquedo << ": ";
            getline (cin, loja[i].codigo);
            cout << "\n";
            cout << "Informe a descrição do brinquedo " << loja[i].nome_brinquedo << ": ";
            getline(cin , loja[i].descricao);
            cout << "\n";
            cout << "Informe o preço de compra do brinquedo " << loja[i].nome_brinquedo<< ": ";
            cin >> loja[i].preco_compra;
            cin.ignore();
            cout << "\n";
            cout << "Informe o preço de venda do brinquedo " << loja[i].nome_brinquedo << ": ";
            cin >> loja[i].preco_venda;
            cin.ignore();
            cout << "\n";
            cout << "Quantidade em estoque do brinquedo " << loja[i].nome_brinquedo << ": ";
            cin >> loja[i].quantidade_estoque;
            cin.ignore();
            cout << "\n";
            cout << "Quantidade de estoque minino do brinquedo " << loja[i].nome_brinquedo << ": ";
            cin >> loja[i].estoque_minimo;
            cin.ignore();
            cout << "\n";
            Limpa();
        }

            
            Menu_Brinquedos();
            cin >> Opcao;
            cin.ignore();
        break;

        case 2:
            Limpa();
            cout << "Calculo do lucro obtido e o seu percentual" << endl;
            for (int i = 0; i < num; i++)
            {
                loja[i].lucro = loja[i].preco_venda - loja[i].preco_compra;
                loja[i].percentual = loja[i].lucro * 100;
            }
            Limpa();
            Menu_Brinquedos();
            cin >> Opcao;
            cin.ignore();
        break;

        case 3:
            Limpa();
            cout << "Produtos abaixo do estoque minimo" << endl;
            for (int i = 0; i < num; i++)
            {
                if (loja[i].quantidade_estoque < loja[i].estoque_minimo){
                    cout << "O brinquedo " << loja[i].nome_brinquedo << " está com o estoque abaixo do minimo.";
                    cout << "\n";
                }
            }

            Limpa();
            Menu_Brinquedos();
            cin >> Opcao;
            cin.ignore();        
            break;

        case 4:
            Limpa();
            cout << "Impressão dos dados do brinquedo" << endl;
            for (int i = 0; i < num; i++)
            {
                cout << "======================================================================================" << endl;
                cout << i + 1 << "° brinquedo: " << loja[i].nome_brinquedo << "|";
                cout << " Código brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].codigo << endl;
                cout << " Descrição do brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].descricao << endl;
                cout << " Preço de compra do brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].preco_compra << "|";
                cout << " Preço de venda do brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].preco_venda << endl;
                cout << " Quantidade em estoque do brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].quantidade_estoque << "|";
                cout << " Quantidade minima em estoque do brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].estoque_minimo << endl;
                cout << " Lucro sobre o brinquedo " << loja[i].nome_brinquedo << ": " << loja[i].lucro << "|" ;
                cout << " Percentual obtido " << loja[i].nome_brinquedo << ": " << loja[i].percentual << endl;
                cout << "======================================================================================" << endl;
                Limpa();
            }
            Menu_Brinquedos();
            cin >> Opcao;
            cin.ignore();
        break;

        default:
            Limpa();
            cout << "Opção invalida" << endl;
            Menu_Brinquedos();
            cin >> Opcao;
            cin.ignore();
            break;
        }
    }

    return 0;
    
}