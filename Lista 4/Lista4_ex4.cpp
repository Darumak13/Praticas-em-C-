#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir um n�mero 
// e mostre a tabuada desse n�mero de 1 a 10.

int main(){
	
	// Inicializa��o das variaveis
	int Num, resul;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usu�rio insere um n�mero
	cout << "Informe um n�mero: ";
	cin  >> Num;
	
	// Tabuada do n�mero escolhido
	for (int i = 0 ; i <= 10 ; i++){
		resul = Num * i;
		cout << resul << endl;
	}
	
	system("pause");
	return 0;
}

