#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir um n�mero. 
// Crie uma vari�vel l�gica para verificar se o n�mero � negativo.

int main(){
	
	// Variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio insere um n�mero
	cout << "Insira um n�mero: ";
	cin  >> Num;
	
	if(Num < 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if (verificaNum == true){
		cout << "O n�mero " << Num << " � um n�mero negativo" << endl;
	} else {
		cout << "O n�mero " << Num << " n�o � um n�mero negativo" << endl;
	}
	
	system("pause");
	return 0;
}
