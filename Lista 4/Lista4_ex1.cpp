#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que conte de 1 a 10 e exiba os números.

int main(){
	
	// Inicialização de variaveis
	int cont;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Contador de 1 ate 10
	for (cont = 1 ; cont <= 10 ; cont ++){
		cout << cont << " ";
	}
	
	cout << "\n";
	system("pause");
	return 0;
}
