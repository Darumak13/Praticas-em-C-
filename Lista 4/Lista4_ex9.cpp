#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que exiba os quadrados dos n�meros de 1 a 10.

int main(){
	
	// Inicializa��o das variaveis
	int num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	cout << "QUADRADO DOS N�MEROS";
	cout << "\n";
	cout << "***************************";
	cout << "\n";
	// contador de 1 ate 10 e exibe os quadrados deles
	for (int i = 1 ; i <= 10 ; i ++){
		num = pow (i,2);
		cout << i << " = " << num << "\n";
	}	
	cout << "***************************";
	cout << "\n";
		
	system("pause");
	return 0;
}
