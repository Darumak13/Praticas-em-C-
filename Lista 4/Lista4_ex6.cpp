#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a média de 
// 5 números inseridos pelo usuário.

int main(){

	// Inicialização das variaveis
	int num,sum;
	double media;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Repetição de inserção de 5 números
	for (int i = 0 ; i < 5 ; i ++){
		cout << "Informe um númro: ";
		cin  >> num;
		sum += num;
	}
	
	media = sum/5;
	
	cout << "A média dos 5 números inseridos pelo usuário foi = " << media << "\n"; 
	
	system("pause");
	return 0;
}
