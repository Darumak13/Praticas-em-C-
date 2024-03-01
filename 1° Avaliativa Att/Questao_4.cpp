#include "testeLibrary.h"


// Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir
// da escolha do usuário 'que deverá informar o prato, a sobremesa e bebida (veja a
// tabela a seguir).

// Menu dos pratos
void MenuPrato ()
{
    cout << "Prato" << endl;
    cout << "1. Vegetariano" << endl;
    cout << "2. Peixe" << endl;
    cout << "3. Frango" << endl;
    cout << "4. Carne" << endl;
    cout << "5. Nenhum ou satisfeito " << endl;
    cout << "> ";
}

// Menu das sobremessas
void MenuSobremessa ()
{
    cout << "Sobremessa" << endl;
    cout << "1. Abacaxi" << endl;
    cout << "2. Sorvete diet" << endl;
    cout << "3. Mousse diet" << endl;
    cout << "4. Mousse chocolate" << endl;
    cout << "5. Nenhum ou satisfeito" << endl;
    cout << "> ";
}

// Menu das bebidas
void MenuBebida ()
{
    cout << "Bebida" << endl;
    cout << "1. Chá" << endl;
    cout << "2. Suco de Laranja" << endl;
    cout << "3. Suco de melão" << endl;
    cout << "4. Refrigerante diet" << endl;
    cout << "5. Nenhum ou satisfeito" << endl;
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
    int total_Cal;
    int OpcaoPrato, OpcaoBebida, OpcaoSobremessa;

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Chama o menu de pratos
    MenuPrato ();
    cin >> OpcaoPrato;
    Limpa ();

    // Chama o menu de bebidas
    MenuBebida ();
    cin >> OpcaoBebida;
    Limpa ();

    // Chama o menu de sobremessas
    MenuSobremessa ();
    cin >> OpcaoSobremessa;

    while (OpcaoPrato != 5) {
        switch (OpcaoPrato) {
        case 1:
            Limpa ();
            cout << "Vegetariano" << endl;
            total_Cal += 180;
            MenuPrato ();
            cin >> OpcaoPrato;
            Limpa ();
            break;

        case 2:
            Limpa ();
            cout << "Peixe" << endl;
            total_Cal += 230;
            MenuPrato ();
            cin >> OpcaoPrato;
            Limpa ();
            break;

        case 3:
            Limpa ();
            cout << "Frango" << endl;
            total_Cal += 250;
            MenuPrato ();
            cin >> OpcaoPrato;
            Limpa ();
            break;

        case 4:
            Limpa ();
            cout << "Carne" << endl;
            total_Cal += 350;
            MenuPrato ();
            cin >> OpcaoPrato;
            Limpa ();
            break;

        default:
            Limpa ();
            cout << "Opção Invalida";
            MenuPrato ();
            cin >> OpcaoPrato;
            Limpa ();
            break;
        }
    }

    while (OpcaoBebida != 5) {
        switch (OpcaoBebida) {
        case 1:
            Limpa ();
            cout << "Chá" << endl;
            total_Cal += 20;
            MenuBebida ();
            cin >> OpcaoBebida;
            Limpa ();
            break;

        case 2:
            Limpa ();
            cout << "Suco de laranja" << endl;
            total_Cal += 70;
            MenuBebida ();
            cin >> OpcaoBebida;
            Limpa ();
            break;

        case 3:
            Limpa ();
            cout << "Suco de melão" << endl;
            total_Cal += 100;
            MenuBebida ();
            cin >> OpcaoBebida;
            Limpa ();
            break;

        case 4:
            Limpa ();
            cout << "Refrigerante diet" << endl;
            total_Cal += 65;
            MenuBebida ();
            cin >> OpcaoBebida;
            Limpa ();
            break;

        default:
            Limpa ();
            cout << "Opção Invalida" << endl;
            MenuBebida ();
            cin >> OpcaoBebida;
            Limpa ();
            break;
        }
    }

    while (OpcaoSobremessa != 5) {
        switch (OpcaoSobremessa) {
        case 1:
            Limpa ();
            cout << "Abacaxi" << endl;
            total_Cal += 75;
            MenuSobremessa ();
            cin >> OpcaoSobremessa;
            Limpa ();
            break;

        case 2:
            Limpa ();
            cout << "Sorvete diet" << endl;
            total_Cal += 110;
            MenuSobremessa ();
            cin >> OpcaoSobremessa;
            Limpa ();
            break;

        case 3:
            Limpa ();
            cout << "Mousse diet" << endl;
            total_Cal += 170;
            MenuSobremessa ();
            cin >> OpcaoSobremessa;
            Limpa ();
            break;

        case 4:
            Limpa ();
            cout << "Mousse chocolate" << endl;
            total_Cal += 200;
            MenuSobremessa ();
            cin >> OpcaoSobremessa;
            Limpa ();
            break;

        default:
            Limpa ();
            cout << "Opção Invalida" << endl;
            MenuSobremessa ();
            cin >> OpcaoSobremessa;
            Limpa ();
            break;
        }
    }

    cout << "TOTAL DE CALORIA" << endl;
    cout << total_Cal << " cal " << endl;

    return 0;
}