#include <iostream>
#include <math.h>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir dois n�meros inteiros e, 
// em seguida, troque o valor entre esses n�meros e imprima os novos valores.

int main() {
	
	int num1, num2, aux;
	
	// Informa o 1� n�mero
	cout << "Informe o primero numero: ";
	cin >> num1;
	
	// Informa o 2� n�mero
	cout << "Informe o segundo numero: ";
	cin >> num2;
	
	// Impress�o antes da troca
	cout << "Primero " << num1 << " Segundo " << num2 << endl;
	
	// Troca entre os valores
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	// Impress�o apos a troca
	cout << "Segundo " << num1 << " Primeiro " << num2 << endl;
	
	system ("pause");
	
	return 0;
}
