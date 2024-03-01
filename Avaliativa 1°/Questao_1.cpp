#include "testeLibrary.h"

// sexo (masculino, feminino);
// cor dos olhos (azuis, verdes, castanhos);
// cor dos cabelos (louros, castanhos, pretos);
// idade em anos.

// Menu para o usuário escolher
void Menu ()
{
    cout << "MENU" << endl;
    cout << "1. Cadastro de habitantes" << endl;
    cout << "2. Impressão de habitantes" << endl;
    cout << "3. Sair" << endl;
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

// Cria um objeto denominado habitantes instanciando variaveis destinadas a ela.
typedef struct Habitantes
{
    string sexo;
    string corOlhos;
    string corCabelo;
    int idade;
} Habitantes;

int main ()
{
    Habitantes pessoas[100];
    int maiorIdade    = 0;
    double contPorcen = 0.0;
    int opcao;
    setlocale (LC_CTYPE, "PORTUGUESE");

    Menu ();
    cin >> opcao;

    // Entra com a opção escolhida pelo usuário
    switch (opcao) {
        // Enquanto a opção for diferente de 3, repete o loop e chama o menu
        while (opcao != 3) {
        case 1:
            // Estrutura de repetição para preencher o vetor de objetos
            for (int i = 0; i < 100; i++) {
                // Condicional que entra no cadastro de habitantes
                if ((pessoas[i].idade != -1)) {
                    cout << "\n";
                    cout << "Informe o sexo da " << i + 1 << "° pessoa: ";
                    cin >> pessoas[i].sexo;
                    cout << "\n";
                    cout << "Informe a cor dos olhos da " << i + 1 << "° pessoa: ";
                    cin >> pessoas[i].corOlhos;
                    cout << "\n";
                    cout << "Informe a cor do cabelo da " << i + 1 << "° pessoa: ";
                    cin >> pessoas[i].corCabelo;
                    cout << "\n";
                    cout << "Informe a idade da " << i + 1 << "° pessoa: ";
                    cin >> pessoas[i].idade;
                    cout << "\n";
                    maiorIdade = pessoas[i].idade;

                    // Condicional que sai do cadastro de habitantes
                    if (pessoas[i].idade == -1) {
                        break;
                    }
                }
            }
            Limpa ();
            Menu ();
            cin >> opcao;

        case 2:
            // Imprime o vetor das caracteristicas dos habitantes
            cout << "================================================================================" << endl;
            for (int i = 0; i < 100; i++) {
                cout << "================================================================================" << endl;
                cout << "Sexo do " << i + 1 << "° habitante = " << pessoas[i].sexo << endl;
                cout << "Cor dos olhos do " << i + 1 << "° habitante = " << pessoas[i].corOlhos << endl;
                cout << "Cor do cabelo do " << i + 1 << "° habitante = " << pessoas[i].corCabelo << endl;
                cout << "Idade do " << i + 1 << "° habitante = " << pessoas[i].idade << endl;
                cout << "================================================================================" << endl;
            }
            cout << "================================================================================" << endl;

            Limpa ();
            Menu ();
            cin >> opcao;
        }
    }

    for (int i = 0; i < 100; i++) {
        // Condicional que pega a maior idade entre os habitantes
        if (pessoas[i].idade > maiorIdade) {
            maiorIdade = pessoas[i].idade;
        }
    }

    Limpa ();

    // Imprime a maior idade entre os habitantes
    cout << "Maior idade entre os habitante: " << maiorIdade << endl;

    // Estrutura condicional que conta quantas pessoas se encaixam nos requisitos abaixo
    for (int i = 0; i < 100; i++) {
        if ((pessoas[i].sexo == "feminino") && (pessoas[i].idade >= 18 && pessoas[i].idade <= 35) && (pessoas[i].corOlhos == "verde") && (pessoas[i].corCabelo == "louro")) {
            contPorcen++;
        }
    }

    // Calculo que faz a porcentagem de habitantes que se encaixam nos requisitos acima
    contPorcen = contPorcen / 100;

    // Imprime a porcentagem de habitantes com os requesitos impostos
    cout << contPorcen << "%  dos habitantes são do sexo feminino tem idade entre 18 e 35 anos, e que tenha olhos verdes e cabelos louros. ";

    return 0;
}
