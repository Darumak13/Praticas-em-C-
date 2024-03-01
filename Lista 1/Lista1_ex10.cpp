#include <iostream>
#include <math.h>
#include <string>
#include <locale>
using namespace std;

// Crie um programa que solicite ao usuário o nome do produto, a quantidade comprada
// e o preço unitário. O programa deve calcular o valor total da compra e mostrar uma
// nota fiscal.

int main () {
	
	string produto;
	int quant;
	double preco, valorT;
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Informa o nome do produto 
	cout << "Informe o nome do produto : ";
	cin >> produto;
	
	// Informa o quantidade do produto
	cout << "informe a quantidade comprada: ";
	cin >> quant;
	
	// Informa o preço por unidae
	cout << "Informe o preço por unidade: ";
	cin >> preco;
	
	// Faz o calculo do valor total dos produtos
	valorT = preco * quant;
	
	// Imprime um nota fiscal
	cout << "**************************" <<endl;
	cout << "* Pro. " << produto <<   "*" << endl;
	cout << "* Pre. " << preco  <<   "*" << endl;
	cout << "* Quant." << quant <<   "*" << endl;
	cout << "* Valor t." <<nvalorT << "*" << endl;
	cout << "**************************" <<endl;
	
	system("pause");
	
	return 0;
}
