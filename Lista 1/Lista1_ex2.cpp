#include <iostream>
#include <math.h>

using namespace std;

//Crie um programa que calcule e imprima a soma de dois n�meros inteiros inseridos pelo usu�rio.

int main(){
	
	int num1, num2;
	
	// Informa o primeiro n�mero
	cout << "Informe o 1 numero: ";
	cin >> num1;
	
	// Informa o segundo n�mero
	cout << "Informe o 2 numero: ";
	cin >> num2;
	
	// Faz o calculo e imprime o resultado da soma entre eles
	cout << "A soma de " << num1 <<  " + "  << num2 <<  " = " << num1 + num2 << endl;
	
	system("pause");
	
	return 0;
	
}
