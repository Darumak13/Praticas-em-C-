#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um programa que peça ao usuário para digitar um número inteiro e, 
// em seguida, verifique se o número é par ou ímpar.

int main() {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	int num;
	
	// Repete até informar um número inteiro
	do  {
		cout << "Digite um número inteiro: ";
		cin >> num;
	}	
	while (num < 0 );
	
	if (num % 2 == 0 ) {
		cout << "O número " << num << " é um número par "<<endl;
	} 
	
	else {
		cout << "O número " << num << " não é um número par "<<endl;
	}
	
	system("pause");
	return 0;
}
