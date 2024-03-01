#include <iostream>
#include <math.h>
#include <string>

// Crie um programa que peça ao usuário para digitar seu nome e sua idade, 
// e então imprima uma mensagem dizendo quantos anos a pessoa terá daqui a 10 anos.

using namespace std;

int main() {
	
	string nome;
	int idade;
	
	// Informa o nome do usuário
	cout << "Informe o nome de usuario: ";
	cin >> nome;
	
	// Informa a idade do usuário
	cout << "Informe a idade de " << nome << " : ";
	cin >> idade;
	
	//  Imprime o nome e a idade do usuário daqui a 10 anos
	cout << "O usuario " << nome << " de " << idade << " tera daqui a 10 anos: " << idade + 10 << endl;
	
	system("pause");
	
	return 0; 
}





