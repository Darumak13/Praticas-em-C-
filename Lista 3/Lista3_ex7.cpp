#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário sua idade e 
// determine em qual faixa etária ele se encontra.

int main(){
	
	// Inicialização de variaveis
	int Idade;
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	// Usuário informa a idade
	cout << "Informe a idade: ";
	cin  >> Idade;
	cout << "\n";
	
	switch(Idade){
		
		case 0 ... 12:
			cout << "Criança \n";
		break;
		
		case 13 ... 19:
			cout << "Adolescente \n";
		break;
		
		case 20 ... 59:
			cout << "Adulto \n";
		break;
		
		default:
			cout << "Idoso \n";
		break; 
	}
	
	system("pause");
	return 0;
	
}
