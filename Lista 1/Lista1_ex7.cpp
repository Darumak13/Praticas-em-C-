#include <iostream> 
#include <math.h>
#include <string>

// Crie um programa que pe�a ao usu�rio para inserir seu nome e idade e, 
// em seguida, imprima uma mensagem de sauda��o seguida da idade. 

using namespace std;

int main () {
	
	string nome;
	int idade;
	
	// O usu�rio informa o nome 
	cout << "Informe o nome de usuario: ";
	cin >> nome;
	
	// O usu�rio informa a idade
	cout << "Informe a sua idade " << nome << " : ";
	cin >> idade;
	
	// Imprime o nome e a idade do usuario
	cout << "*************************************" << endl;
	cout << "Usuario " << nome << " de " << idade << " anos de idade " << endl ;
	cout << "MUITO BEM VINDO" << endl;
	cout << "*************************************" << endl;
	
	system("pause");
	
	return 0;
}
