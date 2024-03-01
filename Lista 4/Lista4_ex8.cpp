#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a soma de todos os números inteiros de 1 a 100.

int main(){
	
	// Inicialização de variaveis
	int i, sum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// contador de 1 a 100 e soma deles
	for (i = 2 ; i <= 100 ; i ++) {
		sum += i;
	}
	
	cout << "A soma dos números de 1 a 100 é = " << sum << "\n";
	system("pause");
	return 0;
}
