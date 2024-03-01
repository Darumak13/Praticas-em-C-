#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que exiba os números pares de 10 a 100.

int main(){
		
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repetição que conta e exibe os números pares de 10 a 100
	cout << "NÚMEROS PARES";
	cout << "\n";
	for (int i = 10 ; i < 100 ; i++){
		if (i%2 == 0){
			cout << i << endl;
		}
		
		else{
			cout << "\n";
		}
	}
	
	system("pause");
	return 0;
}
