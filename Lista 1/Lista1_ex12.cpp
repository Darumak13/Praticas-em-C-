#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que converta uma quantidade em d�lares para reais. 
// O usu�rio deve inserir a quantidade em d�lares e a taxa de c�mbio.

int main (){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	double dolar, taxaC, real;
	
	// Informa a quantidade a ser convertida
	cout << "Informe o valor a ser convertido: ";
	cin >> dolar;
	
	// Informa a taxa de c�mbio
	cout << "Informe a taxa de c�mbio: ";
	cin >> taxaC;
	
	
	// Faz o calculo para convers�o para real
	real = dolar *  taxaC;
	
	// Imprime o valor convertido para real
	cout << dolar << "$ para real = R$ "  << real << endl;

	system("pause");
	
	return 0;
}
