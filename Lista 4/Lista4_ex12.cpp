#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que faça uma contagem regressiva de 20 a 1 e 
// exiba os números.

int main(){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repetição no qual faz uma regressão de 20 a 1
	for (int i = 20 ; i >= 1 ; i --){
		cout << i << " ";
	}
	
	cout << "\n";
	system("pause");
	return 0;

}
