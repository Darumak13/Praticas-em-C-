#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número. 
// Crie uma variável lógica para verificar se o número é par.

int main(){
	
	// Inicialização das variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário informa um número
	cout << "Informe um número: ";
	cin  >> Num;
	
	if(Num%2 == 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if(verificaNum == true){
		cout << "O número " << Num << " é par" << endl;
	} else {
		cout << "O número " << Num << " não é par" << endl;
	}
	
	system("pause");
	return 0;
}	
