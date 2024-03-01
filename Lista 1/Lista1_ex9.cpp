#include <iostream>
#include <math.h>

using namespace std;

// Crie um programa que peça ao usuário para inserir dois números inteiros e, 
// em seguida, troque o valor entre esses números e imprima os novos valores.

int main() {
	
	int num1, num2, aux;
	
	// Informa o 1° número
	cout << "Informe o primero numero: ";
	cin >> num1;
	
	// Informa o 2° número
	cout << "Informe o segundo numero: ";
	cin >> num2;
	
	// Impressão antes da troca
	cout << "Primero " << num1 << " Segundo " << num2 << endl;
	
	// Troca entre os valores
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	// Impressão apos a troca
	cout << "Segundo " << num1 << " Primeiro " << num2 << endl;
	
	system ("pause");
	
	return 0;
}
