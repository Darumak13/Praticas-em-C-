#include "testeLibrary.h"

// Entrar com números e imprimir o triplo de cada número O algoritmo acaba quando
//   entrar o número -999

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int  Num, Triplo;
    setlocale (LC_CTYPE, "PORTUGUESE");
            
            while(Num != - 999){ 
            cout << "Informe um número: ";
            cin >> Num;
            Triplo = Num * 3;
            cout << "Triplo do números" << endl;
            cout << "===============================" << endl;
            cout << "O triplo de " << Num << " = " << Triplo << endl;     
            cout << "================================" << endl;
            Limpa();
            }
    
    return 0;

}

