#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pergunte a idade do usu�rio e 
// verifique se ele � maior de idade
// (idade maior ou igual a 18 anos).

int main(){
	
	// Inicializa��o das variaveis
	int idade;
	
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inser��o dos dados
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	cout << "\n";
	
	// Condi��o para verificar se o usu�rio � maior de idade
	if (idade >= 18){
		cout << "Maior de idade \n";
	}else
		cout << "Menor de idade \n";
		
	system("pause");
	
	return 0;
}
