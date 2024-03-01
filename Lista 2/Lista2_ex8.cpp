#include <iostream>
#include <string>
#include <locale>

using namespace std;

// Crie um programa que compare duas palavras e determine se são iguais.

int main(){
	
	// Inicialização das variaveis
	string palavra1, palavra2;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Inserção das duas palavras
	cout << "Escreva uma palavra: ";
	cin  >> palavra1;
	
	cout << "\n";
	
	cout << "Escreva outra palavra: ";
	cin  >> palavra2;
	
	// Condição para verificar se as duas palavras são iguais
	if (palavra1 == palavra2){
		cout << "As palavras são iguais \n";
	}else
		cout << "As palavras não são iguais \n";
		
	system("pause");
	
	return 0;
}
