#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça um número e verifique se ele é múltiplo de 5.

int main(){
	
	int num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Informa um número pelo usuário
	cout << "Informe um número: ";
	cin >> num;
	
	// Condição que verifica se o número é multiplo de 5
	if (num % 5 == 0) {
		cout << "O número " << num << " é multiplo de 5 \n";
	} else
		cout << "O número " << num << " não é multiplo de 5 \n";
		
	system("pause");
	
	return 0;
}
