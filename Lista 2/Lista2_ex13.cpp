#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a um n�mero e verifique se ele � m�ltiplo de 5.

int main(){
	
	int num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Informa um n�mero pelo usu�rio
	cout << "Informe um n�mero: ";
	cin >> num;
	
	// Condi��o que verifica se o n�mero � multiplo de 5
	if (num % 5 == 0) {
		cout << "O n�mero " << num << " � multiplo de 5 \n";
	} else
		cout << "O n�mero " << num << " n�o � multiplo de 5 \n";
		
	system("pause");
	
	return 0;
}
