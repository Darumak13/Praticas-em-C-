#include "testeLibrary.h"

// Em uma eleição presidencial, existem quatro candidatos. Os votos são informados
// através de código. Os dados utilizados para a escrutinagem 1 obedecem à seguinte codificação:
// 1, 2, 3, 4 = voto para os respectivos candidatos;
// 5 = voto nulo;
// 6 = voto em branco;
// Elaborar um algoritmo que calcule e imprima:
// total de votos para cada candidato:
// total de votos nulos;
// total de votos em branco,
// percentual dos votos em branco e nulos sobre o total

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

// Menu de votação dos candidatos 
void Menu_votacao ()
{
    cout << "Escolha umas da opções." << endl;
    cout << "1. Bob Esponja." << endl;
    cout << "2. Goku." << endl;
    cout << "3. Naruto." << endl;
    cout << "4. As Winx." << endl;
    cout << "5. voto nulo." << endl;
    cout << "6. voto em branco." << endl;
    cout << "7. Terminar as votações." << endl;
    cout << "> ";
}

int main ()
{
    // Variavel que faz a escolha de voto
    int opcao_voto;
    // Variveis para os votos de cada candidato
    int voto_1 = 0, voto_2 = 0, voto_3 = 0, voto_4 = 0;
    // Variaveis para os votos nulos e brancos
    int voto_nulo = 0, voto_branco = 0;
    // Variaveis para o percentual dos votos brancos e nulos
    int total_branco_nulo, percen_branco_nulo = 0, quant_geral = 0;

    Menu_votacao ();
    cin >> opcao_voto;
    Limpa ();
    while (opcao_voto != 7) {
        switch (opcao_voto) {
        case 1:
            Limpa ();
            cout << "=====Bob Esponja=====" << endl;
            voto_1++;
            quant_geral++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        case 2:
            Limpa ();
            cout << "=====Goku=====" << endl;
            voto_2++;
            quant_geral++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        case 3:
            Limpa ();
            cout << "=====Naruto=====" << endl;
            voto_3++;
            quant_geral++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        case 4:
            Limpa ();
            cout << "=====As Winx=====" << endl;
            voto_4++;
            quant_geral++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        case 5:
            Limpa ();
            cout << "=====Voto Nulo=====" << endl;
            voto_nulo++;
            quant_geral++;
            percen_branco_nulo++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        case 6:
            Limpa ();
            cout << "=====Voto em Branco=====" << endl;
            voto_branco++;
            quant_geral++;
            percen_branco_nulo++;
            cout << "Voto computado" << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;

        default:
            Limpa ();
            cout << "Opção invalida para votação." << endl;
            Limpa ();
            Menu_votacao ();
            cin >> opcao_voto;
            Limpa ();
            break;
        }
    }

    // Faz o calculo da porcentagem para os votos nulos e brancos
    total_branco_nulo = percen_branco_nulo * 100 / quant_geral;

    Limpa ();

    // Imprime todos os votos dos candidatos incluindo os votos brancos e nulos
    cout << "==============================================" << endl;
    cout << "Total de votos para o candidato Bob Esponja: " << voto_1 << endl;
    cout << "Total de votos para o candidato Goku: " << voto_2 << endl;
    cout << "Total de votos para o candidato Naruto: " << voto_3 << endl;
    cout << "Total de votos para o candidato As Winx: " << voto_4 << endl;
    cout << "Total de votos para o candidato Voto Nulo: " << voto_nulo << endl;
    cout << "Total de votos para o candidato Voto Branco: " << voto_branco << endl;
    cout << "Percentagem de votos brancos e nulos: " << total_branco_nulo << "%" << endl;
    cout << "==============================================" << endl;

    Limpa ();

    return 0;
}