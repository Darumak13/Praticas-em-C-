#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir um n�mero. 
// Crie uma vari�vel l�gica para verificar se o n�mero � par.

int main(){
	
	// Inicializa��o das variaveis
	int Num;
	bool verificaNum;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usu�rio informa um n�mero
	cout << "Informe um n�mero: ";
	cin  >> Num;
	
	if(Num%2 == 0){
		verificaNum = true;
	} else {
		verificaNum = false;
	}
	
	if(verificaNum == true){
		cout << "O n�mero " << Num << " � par" << endl;
	} else {
		cout << "O n�mero " << Num << " n�o � par" << endl;
	}
	
	system("pause");
	return 0;
}	
