#include "testeLibrary.h"

// Entrar com n�meros e imprimir o triplo de cada n�mero O algoritmo acaba quando
//   entrar o n�mero -999

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
            cout << "Informe um n�mero: ";
            cin >> Num;
            Triplo = Num * 3;
            cout << "Triplo do n�meros" << endl;
            cout << "===============================" << endl;
            cout << "O triplo de " << Num << " = " << Triplo << endl;     
            cout << "================================" << endl;
            Limpa();
            }
    
    return 0;

}

