#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que faça uma contagem regressiva de 10 a 1 e exiba os números.

int main(){
	
	// Inicialização de variaveis
	int cont;
	
	// Contador de 10 ate 1
	for (cont = 10 ; cont >= 1 ; cont --){
		cout << cont << " ";
	}
	
	cout << "\n";
	system("pause");
	return 0;
}
	
