#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

//Crie um programa que pe�a dois n�meros ao usu�rio e 
//determine se eles s�o iguais.

int main(){
	
	// Inicializa��o de variaveis
	int num1,num2;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Inser��o dos dois n�meros
	cout << "Informe o 1� n�mero: ";
	cin >> num1;	
	
	cout << "Informe o 2� n�mero: ";
	cin >> num2;
	
	// Condi��o de verifica��o de n�meros iguais
	if (num1 == num2){
		cout << "O n�mero " << num1 << " � igual ao o n�mero  " << num2 << "\n";
	}else 
		cout << "O n�mero " << num1 << " n�o � igual ao o n�mero  " << num2 << "\n";
	
	system("pause");
	
	return 0;	
}
