#include "testeLibrary.h"

//6. Criar um algoritmo que receba a idade e a opinião de 20 espectadores, calcule e imprima:
// a média das idades das pessoas que responderam excelente;
// a quantidade de pessoas que responderam regular;
// a percentagem de pessoas que responderam bom entre todos os expectadores analisados.

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

// Menu de avaliação de avaliação do usuário
void MenuAvaliacao(){
    cout << "1. Excelnte" << endl;
    cout << "2. Regular" << endl;
    cout << "3. Bom" << endl;
    cout << "> ";
}


int main ()
{
    int vIdade[20];
    // variavel que conta e faz média de pessoas que respoderam excelente
    int cont_idade{0}, Media_idade_E{0}; 
    // variavel da quantidade de pessoas que respoderam regular
    int Quant_pessoa_R{0};
    // variaveis para a percentagem de pessoas que respoderam bom
    int Total_quant = {0}, cont_quant {0}, percentagem_Bom{0};
    // variavel para escolher as opções
    int Op;

    setlocale (LC_CTYPE, "PORTUGUESE");

    for (int i = 0; i < 20; i++)
    {
        cout << "Informe a idade da " << i + 1 << "° pessoa = ";
        cin >> vIdade[i];
        cout << "\n";
        cont_quant++;
        MenuAvaliacao();
        cin >> Op;
        Limpa();

        switch (Op)
        {
        case 1:
            cont_idade++;
            break;
        
        case 2:
            Quant_pessoa_R++;
        break;

        case 3:
            percentagem_Bom++;
        break;

        default:
            cout << "Informação Invalida" << endl;
        break;
        }
    }

    // Calcula a média das idades das pessoas que responderam excelente
    Media_idade_E = cont_idade / 20;

    // Percentagem de pessoas que respoderam bom
    Total_quant = percentagem_Bom * 100 / cont_quant;

    cout << "======================================================================" << endl;
    cout << "Média das pessoas que respoderam excelente: " << Media_idade_E << endl;
    cout << "======================================================================" << endl;

    Limpa();

    cout << "======================================================================" << endl;
    cout << "Quantidade de pessoas que respoderam regular: " << Quant_pessoa_R << endl;
    cout << "======================================================================" << endl;

    Limpa();

    cout << "======================================================================" << endl;
    cout << "Percentagem de pessoas que respoderam bom: " << Total_quant << "%"<< endl;
    cout << "======================================================================" << endl;

    Limpa();

    return 0;
}