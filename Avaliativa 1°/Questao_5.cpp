#include "testeLibrary.h"

// Criar um algoritmo que leia um número da entrada (num), leia n números inteiros da
// entrada e imprima o maior deles. Não suponha que todos os números lidos serão
// positivos. Exemplo:

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}


int main ()
{
    int num, vNum[10], maior;

    setlocale (LC_CTYPE, "PORTUGUESE");

    cout << "Informe um número: ";
    cin >>  num;

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o " << i + 1 << "° número: ";
        cin >> vNum[i];
        maior = vNum[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if ((vNum[i] > maior)&& (vNum[i] > num) )
        {
            maior = vNum[i];
        } else {
            maior = num;
        }
        
    }

    cout << endl;

    cout << "O maior número é = " << maior << endl;
    


    
}