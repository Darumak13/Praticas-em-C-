#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que solicite o nome, idade e endereço de um cliente e 
// mostre todas as informações em um único texto.

int main() {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	string nome, endereco;
	int idade;
	
	// Informa o nome do cliente
	cout << "Informe o seu nome: ";
	getline(cin, nome);
	
	// Informa o endereço do cliente
	cout << "Informe o endereço: ";
	getline(cin,endereco);
	
	// Informa a idade do cliente
	cout << "Informe a idade: ";
	cin >> idade;
	
  	// Imprime todos os dados do cliente
	cout << nome << " com " << idade << " anos de idade reside em " << endereco << endl;
	
	system ("pause");
	
	return 0;
}
