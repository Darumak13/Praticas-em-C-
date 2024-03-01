#include "testeLibrary.h"

// Ler v�rios n�meros e informar quantos n�meros entre 100 e 200 foram digitados.
// Quando o valor O (zero) for lido, o algoritmo dever� cessar sua execu��o.

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
        cout << "Informe um n�mero: ";
        cin >> Num;
        if ((Num >= 100) && (Num <= 200) )
        {
            Cont++;
        }
        
    }

    cout << "Foram digitados " << Cont << " n�meros entre 100 e 200" << endl;

    return 0;
}