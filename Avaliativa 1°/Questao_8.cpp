#include "testeLibrary.h"

// Entrar com o número da conta e o saldo de várias pessoas. Imprimir todas as contas,
// os respectivos saldos e uma das mensagens: positivo/negativo. Ao final, o percentual
// de pessoas com saldo negativo. O algoritmo acaba quando se digita um número
// negativo para a conta.



void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int Saldo_conta; 
    string Numero_conta;
    int Quant_pessoas = 0, Percen = 0, resul_Percen;
    
    setlocale (LC_CTYPE, "PORTUGUESE");

    do{
        cout << "Informe um número para conta: ";
        cin >> Numero_conta;
        cout << "\n";
        cout << "Informe o saldo da conta: ";
        cin >> Saldo_conta;
        Quant_pessoas++;

        Limpa();

        cout << "==============================" << endl;
        cout << "Número da conta: " << Numero_conta << endl;
        if(Saldo_conta <= 0){
            cout << "Saldo Negativo" << endl;
            cout << "Saldo da conta: " << Saldo_conta << endl;
            Percen++;

        } else {
            cout << "Saldo da conta: " << Saldo_conta << endl;
        }

        Limpa();
    } while(Numero_conta != "-1");

    resul_Percen = Percen * 100 / Quant_pessoas;

    cout << "O percentual de pessoas com saldo negativo é = " << resul_Percen << "%" <<endl;

    return 0;
}