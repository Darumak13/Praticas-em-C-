#include "testeLibrary.h"

// 10. Criar um algoritmo que possa ler um conjunto de pedidos de compra e calcule o valor
// total da compra. Cada pedido e composto pelos seguintes campos:
// .n�mero de pedido
// .data do pedido (dia, m�s, ano)
// .pre�o unit�rio
// .quantidade
// o algoritmo dever� processar novos pedidos at� que o usu�rio digite (zero) como
// n�mero do pedido.



void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int Numero_pedido;
    string Data_pedido;
    double PrecoU_pedido, Total_Preco;
    int Quant_pedido;
    
    setlocale (LC_CTYPE, "PORTUGUESE");

    do {
        cout << "Informe o n�mero do pedido: ";
        cin >> Numero_pedido;

        cout << "\n";

        cout << "Informe a data do pedido: ";
        cin >> Data_pedido;

        cout << "\n";

        cout << "Informe o pre�o unitario do produto: ";
        cin >> PrecoU_pedido;

        cout << "\n";

        cout << "Informe a quantidade do produto: ";
        cin >> Quant_pedido;

        Total_Preco = PrecoU_pedido * Quant_pedido;

        Limpa();

        cout << "-------------------------------------" << endl;
        cout << "|N�mero do pedido " << Numero_pedido << " ";
        cout << "| Data do pedido " << Data_pedido << endl;
        cout << "|Preco de cada unidade " << PrecoU_pedido << " ";
        cout << "| Quant. " << Quant_pedido << endl;
        cout << "|Total do pedido " << Total_Preco << endl;
        cout << "-------------------------------------" << endl;

        Limpa();

    } while(Numero_pedido != 0);

    return 0;
}