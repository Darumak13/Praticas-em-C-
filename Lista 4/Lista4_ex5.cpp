#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir um n�mero e 
// calcule o fatorial desse n�mero.

int main(){
	
	// Inicializa��o das variaveis
	int num, fatorial;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	cout << "Informe um n�mero: ";
	cin  >> num;
	cout << "\n";
	
	fatorial = 1;

	// Contador de 1 ate n
	for (int i = 1 ; i <= num ; i ++){
	
		fatorial *=  i;	
	}

	cout << "O fatorial de " << num << " � igual = " << fatorial << "\n";
	
	system("pause");
	return 0;
}
