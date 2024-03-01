#include <iostream>
#include <math.h>

using namespace std;


// Crie um programa que converta graus Celsius para Fahrenheit. 
// O usuário deve inserir a temperatura em Celsius, 
// e o programa deve mostrar a temperatura equivalente em Fahrenheit. Fórmula =&gt; F = (C * 9/5) + 32

int main(){
	
	int celsius, Fah;
	
	// Informa a temperatura em graus Celsius
	cout << "Informe a temperatura: ";
	cin >> celsius;
	
	// Faz o calculo do conversor
	Fah = (celsius * 9/5 ) + 32;
	
	// Imprime a temperatura em Fahrenheit
	cout << celsius <<  " graus celsius em fahrenheit e = " << Fah << endl;
	
	system("pause");
	
	return 0;
}
