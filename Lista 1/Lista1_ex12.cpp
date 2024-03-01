#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que converta uma quantidade em dólares para reais. 
// O usuário deve inserir a quantidade em dólares e a taxa de câmbio.

int main (){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	double dolar, taxaC, real;
	
	// Informa a quantidade a ser convertida
	cout << "Informe o valor a ser convertido: ";
	cin >> dolar;
	
	// Informa a taxa de câmbio
	cout << "Informe a taxa de câmbio: ";
	cin >> taxaC;
	
	
	// Faz o calculo para conversão para real
	real = dolar *  taxaC;
	
	// Imprime o valor convertido para real
	cout << dolar << "$ para real = R$ "  << real << endl;

	system("pause");
	
	return 0;
}
