#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número. 
// Crie uma variável lógica para verificar se o número é múltiplo de 5.

int main(){
	
	// Variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário insere um valor
	cout << "Informe um valor: ";
	cin  >> Num;
	
	// Estrutura de comparação que verefica se é multiplo de 5
	if(Num%5 == 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if (verificaNum == true){
		cout << "O número " << Num << " é multiplo de 5 ";
		cout << "\n";
	} else {
		cout << "O número " << Num << " não é multiplo de 5 ";
		cout << "\n";	
	}
	
	system("pause");
	return 0;
}
