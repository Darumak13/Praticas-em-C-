#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir um número e 
// mostre a tabuada desse número de 1 a 10.

int main(){
	
	// Inicializando variaveis
	int Resul, Num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	cout << "Informe um número: ";
	cin  >> Num;
	
	cout << "TABUADA";
	cout << "\n";
	
	for(int i = 0 ; i <= 10 ; i ++) {
		Resul = Num * i;
		cout << Num << " * " << i << " = " << Resul << endl;
	}
	
	cout << "\n";
	system("pause");
	return 0;
}
