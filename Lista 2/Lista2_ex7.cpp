#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça um número ao usuário e 
// determine se ele é positivo.

int main(){
	
	// Inicialização das variveis
	int Num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inserção do número do usuário
	cout << "Informe um número: ";
	cin  >> Num;
	
	// Condição para verificar se o número é positivo
	if (Num >= 0){
		cout << "O número " << Num << " é positivo \n";
	}else
		cout << "O número " << Num << " é negativo \n";
		
	system("pause");
	
	return 0;

}
