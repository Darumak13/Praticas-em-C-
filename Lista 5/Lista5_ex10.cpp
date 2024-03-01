#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir sua idade e se possui carteira de motorista (sim/n�o). 
// Crie vari�veis l�gicas para verificar se a pessoa pode dirigir com base na idade e na posse da carteira.

int main(){
	
	// Variaveis
	int idade;
	string carteiraM;
	bool verificaIdade, verificaCarteira;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio informa a idade
	cout << "Informe a sua idade: ";
	cin  >> idade;
	
	// Verifica se � maior de 18
	verificaIdade = idade >= 18;
	
	// Usu�rio informa se tem carteira de motorista
	cout << "Possui habilita��o: ";
	cin  >> carteiraM;
	
	// Verifica se tem carteira de motorista
	verificaCarteira = carteiraM == "sim";
	
	if (verificaIdade == true && verificaCarteira == true){
		cout << "Possui carteira e � maior de idade" << endl;
	} else 
		if (verificaIdade == false && verificaCarteira == false){
			cout << "N�o possui carteira e n�o � maior de idade" << endl;
		} else 
			if (verificaIdade == true && verificaCarteira == false){
				cout << "N�o possui carteira e � maior de idade" << endl;
			}
	
	system("pause");
	return 0;
}
