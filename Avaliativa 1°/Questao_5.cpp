#include "testeLibrary.h"

// Criar um algoritmo que leia um n�mero da entrada (num), leia n n�meros inteiros da
// entrada e imprima o maior deles. N�o suponha que todos os n�meros lidos ser�o
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

    cout << "Informe um n�mero: ";
    cin >>  num;

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o " << i + 1 << "� n�mero: ";
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

    cout << "O maior n�mero � = " << maior << endl;
    


    
}