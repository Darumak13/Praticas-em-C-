#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir uma letra. 
// Crie uma variável lógica para verificar se a letra é uma vogal.

int main(){
	
	// Variaveis
	string letra;
	bool verificaLetra;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário insere uma letra
	cout << "Insira uma letra: ";
	cin  >> letra;
	
	if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" ){
		verificaLetra = true;
	} else {
		verificaLetra = false;
	}
	
	if (verificaLetra == true){
		cout << "A letra " << letra << " é uma vogal " << endl;
	} else {
		cout << "A letra " << letra << " não é uma vogal " << endl;
	}
	
	system("pause");
	return 0;
}
