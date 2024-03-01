#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir sua idade e se possui carteira de motorista (sim/não). 
// Crie variáveis lógicas para verificar se a pessoa pode dirigir com base na idade e na posse da carteira.

int main(){
	
	// Variaveis
	int idade;
	string carteiraM;
	bool verificaIdade, verificaCarteira;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário informa a idade
	cout << "Informe a sua idade: ";
	cin  >> idade;
	
	// Verifica se é maior de 18
	verificaIdade = idade >= 18;
	
	// Usuário informa se tem carteira de motorista
	cout << "Possui habilitação: ";
	cin  >> carteiraM;
	
	// Verifica se tem carteira de motorista
	verificaCarteira = carteiraM == "sim";
	
	if (verificaIdade == true && verificaCarteira == true){
		cout << "Possui carteira e é maior de idade" << endl;
	} else 
		if (verificaIdade == false && verificaCarteira == false){
			cout << "Não possui carteira e não é maior de idade" << endl;
		} else 
			if (verificaIdade == true && verificaCarteira == false){
				cout << "Não possui carteira e é maior de idade" << endl;
			}
	
	system("pause");
	return 0;
}
