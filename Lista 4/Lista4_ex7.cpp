#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que exiba os números ímpares de 1 a 50.

int main(){

	// Inicialização das variaveis
	int i;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Comtador que exibe os números impares de 1 a 50
	for (i = 0 ; i < 50 ; i ++ ){
		if (i%2 != 0){
			cout << i << "\n";
		}		
	}
	
	system("pause");
	return 0;
}
