#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a soma de todos os n�meros inteiros de 1 a 100.

int main(){
	
	// Inicializa��o de variaveis
	int i, sum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// contador de 1 a 100 e soma deles
	for (i = 2 ; i <= 100 ; i ++) {
		sum += i;
	}
	
	cout << "A soma dos n�meros de 1 a 100 � = " << sum << "\n";
	system("pause");
	return 0;
}
