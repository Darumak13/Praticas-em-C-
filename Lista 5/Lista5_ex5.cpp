#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir um n�mero. 
// Crie uma vari�vel l�gica para verificar se o n�mero � m�ltiplo de 5.

int main(){
	
	// Variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usu�rio insere um valor
	cout << "Informe um valor: ";
	cin  >> Num;
	
	// Estrutura de compara��o que verefica se � multiplo de 5
	if(Num%5 == 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if (verificaNum == true){
		cout << "O n�mero " << Num << " � multiplo de 5 ";
		cout << "\n";
	} else {
		cout << "O n�mero " << Num << " n�o � multiplo de 5 ";
		cout << "\n";	
	}
	
	system("pause");
	return 0;
}
