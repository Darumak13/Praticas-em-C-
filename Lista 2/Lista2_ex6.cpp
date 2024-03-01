#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

//Crie um programa que peça dois números ao usuário e 
//determine se eles são iguais.

int main(){
	
	// Inicialização de variaveis
	int num1,num2;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Inserção dos dois números
	cout << "Informe o 1° número: ";
	cin >> num1;	
	
	cout << "Informe o 2° número: ";
	cin >> num2;
	
	// Condição de verificação de números iguais
	if (num1 == num2){
		cout << "O número " << num1 << " é igual ao o número  " << num2 << "\n";
	}else 
		cout << "O número " << num1 << " não é igual ao o número  " << num2 << "\n";
	
	system("pause");
	
	return 0;	
}
