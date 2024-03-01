#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça um número e 
// verifique se ele está dentro do intervalo de 10 a 20 (inclusive)

int main(){
	
	// Inicialização de variaveis
	int Num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Informa um número pelo usuário
	cout << "Informe um número: ";
	cin  >> Num;
	
	// Condicional para verificar se o número está entre o intervalo de 10 a 20
	if ((Num >= 10 ) && (Num <= 20)){
		cout << "O número " << Num << " está entre o intervalo de 10 a 20 \n";
	}else
		cout << "O número " << Num << " não está entre o intervalo de 10 a 20 \n";
		
	system("pause");
	
	return 0;
}
