#include <iostream>
#include <math.h>

using namespace std;

//Crie um programa que calcule e imprima o produto de dois n�meros reais inseridos pelo usu�rio.

int main (){
	
	double num1 , num2;
	
	// Informa o primeiro n�mero
	cout << "Informe um numero: ";
	cin  >> num1;
	
	// Informa o segundo n�mero
	cout << "Informe outro numero: ";
	cin >> num2;
	
	// Faz o calculo e imprime o resultado da multiplica��o entre eles
	cout << "O numero " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	
	system("pause");
	
	return 0;
}
