#include <iostream>
#include <math.h>
#include <string>

// Crie um programa que pe�a ao usu�rio para digitar seu nome e sua idade, 
// e ent�o imprima uma mensagem dizendo quantos anos a pessoa ter� daqui a 10 anos.

using namespace std;

int main() {
	
	string nome;
	int idade;
	
	// Informa o nome do usu�rio
	cout << "Informe o nome de usuario: ";
	cin >> nome;
	
	// Informa a idade do usu�rio
	cout << "Informe a idade de " << nome << " : ";
	cin >> idade;
	
	//  Imprime o nome e a idade do usu�rio daqui a 10 anos
	cout << "O usuario " << nome << " de " << idade << " tera daqui a 10 anos: " << idade + 10 << endl;
	
	system("pause");
	
	return 0; 
}





