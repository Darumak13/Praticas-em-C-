#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a m�dia de 
// 5 n�meros inseridos pelo usu�rio.

int main(){

	// Inicializa��o das variaveis
	int num,sum;
	double media;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Repeti��o de inser��o de 5 n�meros
	for (int i = 0 ; i < 5 ; i ++){
		cout << "Informe um n�mro: ";
		cin  >> num;
		sum += num;
	}
	
	media = sum/5;
	
	cout << "A m�dia dos 5 n�meros inseridos pelo usu�rio foi = " << media << "\n"; 
	
	system("pause");
	return 0;
}
