#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número e 
// calcule o fatorial desse número.

int main(){
	
	// Inicialização das variaveis
	int num, fatorial;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	cout << "Informe um número: ";
	cin  >> num;
	cout << "\n";
	
	fatorial = 1;

	// Contador de 1 ate n
	for (int i = 1 ; i <= num ; i ++){
	
		fatorial *=  i;	
	}

	cout << "O fatorial de " << num << " é igual = " << fatorial << "\n";
	
	system("pause");
	return 0;
}
