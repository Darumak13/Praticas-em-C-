#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;
// Crie um programa que solicite o nome e o sal�rio de um funcion�rio. 
// O programa deve calcular e mostrar o sal�rio com um aumento de 10%.

int main (){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	string nomeF;
	float salarioF, aumento;
	
	// Informa o nome do funcion�rio
	cout << "Informe o nome do funcion�rio: ";
	cin >> nomeF;
	
	// Informa o sal�rio antes do aumento
	cout << "Informe o sal�rio antigo: ";
	cin >> salarioF;
	
	// Faz o calculo da porcentagem parao novo sal�rio
	aumento = salarioF * 10/100;
	
	// Imprime o nome o sal�rio antigo e o novo
	cout << "Funcionario > " << nomeF << endl;
	cout << "Sal�rio  > " << salarioF << endl;
	cout << "Novo sal�rio > " << salarioF + aumento << endl;
	
	system("pause");
	
	return 0;	
}
