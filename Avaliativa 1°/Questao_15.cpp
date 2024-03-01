#include "testeLibrary.h"

// 15. Criar um algoritmo que funcione de acordo com o menu a seguir, sabendo-se que
// poderão ser cadastradas até 50 pessoas.
// ********************* MENU *********************
// 1 - Cadastrar dados do cliente
// 2 - Cadastra milhagem do cliente
// 3 - Lista milhagem do cliente
// 4 - Imprimir os nomes que têm maior e menor milhagem
// 5 - Imprime os nomes e as milhagens
// 6- SAIR
// ****************************************************
// OPCAO:


void Menu_Cadastro ()
{
    cout << "********************* MENU *********************" << endl;
    cout << "1 - Cadastrar dados do cliente." << endl;
    cout << "2 - Cadastra milhagem do cliente." << endl;
    cout << "3 - Lista milhagem do cliente." << endl;
    cout << "4 - Imprimir os nomes que têm maior e menor milhagem." << endl;
    cout << "5 - Imprime os nomes e as milhagens." << endl;
    cout << "6- SAIR." << endl;
    cout << "****************************************************" << endl;
    cout << "OPCAO: ";
}

struct cliente {
    string nome, cpf, email;
    int idade;
    int milhagem;
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
    cliente cadastro[10];
    int Op, Op_saida, procura = 0, menor = 0 ,  maior = 0 ;
    string nome_menor , nome_maior;
    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu_Cadastro();
    cin >> Op;
    cin.ignore();

    while (Op != 6)
    {
        switch (Op)
        {
        case 1:       
        Limpa(); 
        cout << "======Cadastro dos dados do cliente======" << endl;
            for(int i = 0; i < 5; i ++){
            cout << "Informe o nome do " << i + 1 << "° cliente: ";
            getline(cin,cadastro[i].nome);
            cout << "\n";
            cout << "Informe a idade de " << cadastro[i].nome << ": ";
            cin >> cadastro[i].idade;
            cin.ignore();
            cout << "\n";
            cout << "Informe o cpf de " << cadastro[i].nome << ": ";
            getline(cin , cadastro[i].cpf);
            cout << "\n";
            cout << "Informe o email de " << cadastro[i].email << ": ";
            getline(cin,cadastro[i].email);
            cout << "\n";
            Limpa();
            }
        Menu_Cadastro();
        cin >> Op;
        cin.ignore();
        Limpa();
        break;
        
        case 2:
            Limpa();
            cout << "======Cadastro das milhagens dos clientes======" << endl;
            for (int i = 0; i < 5; i++)
            {   
                cout << "Informe a milhagem do cliente " << cadastro[i].nome << ": ";
                cin >> cadastro[i].milhagem;   
                maior = cadastro[i].milhagem;
                nome_menor = cadastro[i].nome;
                menor = cadastro[i].milhagem;
                nome_maior = cadastro[i].nome;
            }
            
            Limpa();
            Menu_Cadastro();
            cin >> Op;
            cin.ignore();
        break;

        case 3:
            Limpa();
            cout << "======Lista da milhagem dos clientes======" << endl;
            cout << "Qual milhagem deseja procurar: ";
            cin >> procura;
            cout << "A milhagem " << cadastro[procura].milhagem << " pertence a " << cadastro[procura].nome << endl;
        Limpa();
        Menu_Cadastro();
        cin >> Op;
        cin.ignore();
        break;

        case 4:
            cout << "======Impressão dos nomes que têm maior e menor milhagem======" << endl;
            for (int i = 0; i < 5; i++)
            {
                if(cadastro[i].milhagem > maior){
                    maior = cadastro[i].milhagem;
                    nome_maior = cadastro[i].nome;
                    
                } else
                    if (cadastro[i].milhagem < menor){
                        menor = cadastro[i].milhagem;
                        nome_menor = cadastro[i].nome;
                }
            }
            
            
            cout << "O cliente " << nome_maior << " tem a maior milhagem contendo = " << maior << " milhagens."<< endl;
            cout << "O cliente " << nome_menor << " tem a menor milhagem contendo = " << menor << " milhagens." <<endl;
        Limpa();
        Menu_Cadastro();
        cin >> Op;
        cin.ignore();
        break;

        case 5:
            cout << "======Impressão dos nomes e das milhagens======" << endl;
            cout << "---------------------------------------" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Nome do " << i + 1 << "º cliente: " << cadastro[i].nome << "|";
                cout << "Idade do/da cliente " << cadastro[i].nome << " = " << cadastro[i].idade << endl;
                cout << "Cpf do/da cliente " << cadastro[i].nome << " = " << cadastro[i].cpf << "|";
                cout << "Email do/da cliente " << cadastro[i].nome << " = " << cadastro[i].email << endl;
                cout << "\n";
            }
            
                cout << "---------------------------------------" << endl;
        Limpa();
        Menu_Cadastro();
        cin >> Op;
        cin.ignore();        
        break;

        default:
            cout << "Opção invalida" << endl;
            Limpa();
            Menu_Cadastro();
            cin >> Op;
            cin.ignore();    
        break;
        
    }
    
    }

    return 0;
}