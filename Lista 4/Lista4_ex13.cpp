#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que exiba os números múltiplos de 3 de 1 a 30.

int main(){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repetição que exibe os números múltiplos de 3 
	// De 1 a 30
	cout << "Números Multiplos de 3";
	cout << "\n";
	for (int i = 1 ; i <= 30 ; i++){
		if (i%3 == 0){
			cout << i << " ";
		}
	}
	
	cout << "\n";
	system("pause");
	return 0;
}
