#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número 
// e mostre a tabuada desse número de 1 a 10.

int main(){
	
	// Inicialização das variaveis
	int Num, resul;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário insere um número
	cout << "Informe um número: ";
	cin  >> Num;
	
	// Tabuada do número escolhido
	for (int i = 0 ; i <= 10 ; i++){
		resul = Num * i;
		cout << resul << endl;
	}
	
	system("pause");
	return 0;
}

