#include <iostream>
#include <string>
#include <locale>

using namespace std;

// Crie um programa que compare duas palavras e determine se s�o iguais.

int main(){
	
	// Inicializa��o das variaveis
	string palavra1, palavra2;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Inser��o das duas palavras
	cout << "Escreva uma palavra: ";
	cin  >> palavra1;
	
	cout << "\n";
	
	cout << "Escreva outra palavra: ";
	cin  >> palavra2;
	
	// Condi��o para verificar se as duas palavras s�o iguais
	if (palavra1 == palavra2){
		cout << "As palavras s�o iguais \n";
	}else
		cout << "As palavras n�o s�o iguais \n";
		
	system("pause");
	
	return 0;
}
