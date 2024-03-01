#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número. 
// Crie uma variável lógica para verificar se o número é negativo.

int main(){
	
	// Variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário insere um número
	cout << "Insira um número: ";
	cin  >> Num;
	
	if(Num < 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if (verificaNum == true){
		cout << "O número " << Num << " é um número negativo" << endl;
	} else {
		cout << "O número " << Num << " não é um número negativo" << endl;
	}
	
	system("pause");
	return 0;
}
