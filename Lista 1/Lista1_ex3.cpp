#include <iostream>
#include <math.h>

using namespace std;

//Crie um programa que calcule e imprima o produto de dois números reais inseridos pelo usuário.

int main (){
	
	double num1 , num2;
	
	// Informa o primeiro número
	cout << "Informe um numero: ";
	cin  >> num1;
	
	// Informa o segundo número
	cout << "Informe outro numero: ";
	cin >> num2;
	
	// Faz o calculo e imprime o resultado da multiplicação entre eles
	cout << "O numero " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	
	system("pause");
	
	return 0;
}
