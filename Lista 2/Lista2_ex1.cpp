#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um programa que pe�a ao usu�rio para digitar um n�mero inteiro e, 
// em seguida, verifique se o n�mero � par ou �mpar.

int main() {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	int num;
	
	// Repete at� informar um n�mero inteiro
	do  {
		cout << "Digite um n�mero inteiro: ";
		cin >> num;
	}	
	while (num < 0 );
	
	if (num % 2 == 0 ) {
		cout << "O n�mero " << num << " � um n�mero par "<<endl;
	} 
	
	else {
		cout << "O n�mero " << num << " n�o � um n�mero par "<<endl;
	}
	
	system("pause");
	return 0;
}
