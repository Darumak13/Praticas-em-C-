#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que fa�a uma contagem regressiva de 20 a 1 e 
// exiba os n�meros.

int main(){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repeti��o no qual faz uma regress�o de 20 a 1
	for (int i = 20 ; i >= 1 ; i --){
		cout << i << " ";
	}
	
	cout << "\n";
	system("pause");
	return 0;

}
