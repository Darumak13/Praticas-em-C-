#include <iostream>
#include <math.h>

using namespace std;

// Crie um programa que calcule e imprima o quadrado de um número inteiro inserido pelo usuário.

int main() {
	
	double num;
	
	// O usuario informa um numero
	cout << "Informe um numero: ";
	cin >> num;
	
	// Faz o calculo e imprime o quadrado do valor dado
	cout << "O quadrado de " << num << " = " << pow(num,2) << endl;
	
	system("pause");
	
	return 0;
}
