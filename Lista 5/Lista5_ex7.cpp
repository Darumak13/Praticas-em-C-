#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir uma letra. 
// Crie uma vari�vel l�gica para verificar se a letra � uma vogal.

int main(){
	
	// Variaveis
	string letra;
	bool verificaLetra;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usu�rio insere uma letra
	cout << "Insira uma letra: ";
	cin  >> letra;
	
	if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" ){
		verificaLetra = true;
	} else {
		verificaLetra = false;
	}
	
	if (verificaLetra == true){
		cout << "A letra " << letra << " � uma vogal " << endl;
	} else {
		cout << "A letra " << letra << " n�o � uma vogal " << endl;
	}
	
	system("pause");
	return 0;
}
