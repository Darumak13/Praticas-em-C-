#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;
// Crie um programa que solicite o nome e o salário de um funcionário. 
// O programa deve calcular e mostrar o salário com um aumento de 10%.

int main (){
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	string nomeF;
	float salarioF, aumento;
	
	// Informa o nome do funcionário
	cout << "Informe o nome do funcionário: ";
	cin >> nomeF;
	
	// Informa o salário antes do aumento
	cout << "Informe o salário antigo: ";
	cin >> salarioF;
	
	// Faz o calculo da porcentagem parao novo salário
	aumento = salarioF * 10/100;
	
	// Imprime o nome o salário antigo e o novo
	cout << "Funcionario > " << nomeF << endl;
	cout << "Salário  > " << salarioF << endl;
	cout << "Novo salário > " << salarioF + aumento << endl;
	
	system("pause");
	
	return 0;	
}
