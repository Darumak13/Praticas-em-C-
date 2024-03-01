#include "testeLibrary.h"

void Menu_Hospital ()
{
    cout << "Bem Vindo à clínica médica" << endl;
    cout << "____SAÚDE E BEM ESTAR____" << endl;
    cout << "===========================" << endl;
    cout << "1 - Cadastro do paciente." << endl;
    cout << "2 - Marcar uma consulta." << endl;
    cout << "3 - Verificar o cadastro feito." << endl;
    cout << "4 - Orçamento feito." << endl;
    cout << "5 - Fale Conosco." << endl;
    cout << "6 - Duvidas frequentes." << endl;
    cout << "7 - Sobre/Ouvidoria." << endl;
    cout << "8 - Sair." << endl;
    cout << "=============================" << endl;
    cout << "> ";
}

void Menu_ChekUp ()
{
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

// Estrutura onde guarda as variaveis nome e quantidade do produto
struct Cliente
{
    string nome_Paciente, nome_atendente, nome_Doutor;
    double valor_Consulta, preco_venda, lucro, percentual;
    int quantidade_estoque, estoque_minimo;
};

int main ()
{

    int Opcao, num;
    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu_Hospital ();
}
