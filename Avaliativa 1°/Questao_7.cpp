#include "testeLibrary.h"

// Ler vários números e informar quantos números entre 100 e 200 foram digitados.
// Quando o valor O (zero) for lido, o algoritmo deverá cessar sua execução.

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int  Num, Cont = 0;
    setlocale (LC_CTYPE, "PORTUGUESE");

    while(Num != 0){
        cout << "Informe um número: ";
        cin >> Num;
        if ((Num >= 100) && (Num <= 200) )
        {
            Cont++;
        }
        
    }

    cout << "Foram digitados " << Cont << " números entre 100 e 200" << endl;

    return 0;
}