#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pergunte a idade do usuário e 
// verifique se ele é maior de idade
// (idade maior ou igual a 18 anos).

int main(){
	
	// Inicialização das variaveis
	int idade;
	
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inserção dos dados
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	cout << "\n";
	
	// Condição para verificar se o usuário é maior de idade
	if (idade >= 18){
		cout << "Maior de idade \n";
	}else
		cout << "Menor de idade \n";
		
	system("pause");
	
	return 0;
}
